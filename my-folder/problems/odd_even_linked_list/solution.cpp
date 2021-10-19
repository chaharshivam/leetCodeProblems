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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return NULL;
        vector<int> v;
        ListNode* tempOdd = head;
        if(head->next == NULL)
            return head;
        ListNode* tempEven = head->next;
        while(tempOdd->next != NULL && tempOdd->next->next!=NULL){
            v.push_back(tempOdd->val);
            tempOdd = tempOdd->next->next;
        }
        v.push_back(tempOdd->val);
        while(tempEven->next!=NULL && tempEven->next->next!=NULL){
            v.push_back(tempEven->val);
            tempEven = tempEven->next->next;
        }
        v.push_back(tempEven->val);
        ListNode* finalHead = NULL;
        ListNode* finalTail = NULL;
        for(auto it = v.begin(); it!=v.end(); it++){
            ListNode* newNode = new ListNode(*it);
            if(finalHead == NULL){
                finalHead = newNode;
                finalTail = newNode;
            }else{
                finalTail->next = newNode;
                finalTail = newNode;
            }
        }
        return finalHead;
        
    }
};