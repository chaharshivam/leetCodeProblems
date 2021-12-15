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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        sort(v.begin(), v.end());
        for(int i = 0; i<v.size(); i++){
            ListNode* newNode = new ListNode(v[i]);
            if(newHead == NULL){
                newHead = newNode;
                newTail = newNode;
            }
            else{
                newTail->next = newNode;
                newTail = newNode;
            }
        }
        return newHead;
    }
};