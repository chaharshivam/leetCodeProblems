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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> ourSet;
        while(head != NULL){
            ourSet.insert(head->val);
            head = head -> next;
        }
        auto it = ourSet.begin();
        ListNode* newListHead = NULL;
        ListNode* newListTail = NULL;
        while(it != ourSet.end()){
            ListNode* newNode = new ListNode(*it);
            if(newListHead == NULL){
                newListHead = newNode;
                newListTail = newNode;
            }else{
                newListTail -> next =newNode;
                newListTail = newNode;
            }
            it++;
        }
        return newListHead;
    }
};