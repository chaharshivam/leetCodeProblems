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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len%2 == 0){
            int count = 0;
            ListNode* tempeven = head;
            while(count!=len/2){
                tempeven=tempeven->next;
                count++;
            }
            return tempeven;
        }
        else{
            int count = 0;
            ListNode* tempeven = head;
            while(count!=len/2){
                tempeven=tempeven->next;
                count++;
            }
            return tempeven;
        }
    }
};