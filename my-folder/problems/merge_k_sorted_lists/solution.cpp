/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(auto it = lists.begin(); it != lists.end(); it++){
            ListNode* head = *it;
            while(head != NULL){
                v.push_back(head->val);
                head = head->next;
            }
        }
        sort(v.begin(), v.end());
        auto it = v.begin();
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        while(it != v.end()){
            ListNode* newNode = new ListNode(*it);
            if(newHead == NULL){
                newHead = newNode;
                newTail = newNode;
            }else{
                newTail->next = newNode;
                newTail = newNode;
            }
            it++;
        }
        return newHead;
    }
};