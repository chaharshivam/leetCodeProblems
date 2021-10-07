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
    ListNode* reverseList(ListNode* head){
        if(head==NULL)
            return NULL;
        vector<int> v;
        ListNode* temp = head;
        while(temp != NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        for(auto it = v.end()-1; it!=v.begin()-1; it--){
            ListNode* newNode = new ListNode(*it);
            if(newHead == NULL){
                newHead = newNode;
                newTail = newNode;
            }else{
                newTail->next = newNode;
                newTail = newNode;
            }
        }
        return newHead;
    }
};