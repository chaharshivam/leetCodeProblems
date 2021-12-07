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
    ListNode* mergeTwoLists(ListNode* headOne, ListNode* headTwo) {
        ListNode* finalHead = NULL;
    ListNode* finalTail = NULL;
    if(headOne == NULL && headTwo == NULL)
        return NULL;
    if(headOne == NULL){
        finalHead = headTwo;
        return finalHead;
    }
    if(headTwo == NULL){
        finalHead = headOne;
        return finalHead;
    }
    while(headOne!=NULL && headTwo!=NULL){
        if(finalHead == NULL){
            if(headOne->val < headTwo->val){
                finalHead = headOne;
                finalTail = headOne;
                headOne = headOne->next;
            }else{
                finalHead = headTwo;
                finalTail = headTwo;
                headTwo = headTwo->next;
            }
        }
        else{
            if(headOne->val < headTwo->val){
                finalTail->next = headOne;
                finalTail=headOne;
                headOne = headOne->next;
            }else{
                finalTail->next = headTwo;
                finalTail = headTwo;
                headTwo = headTwo->next;
            }
        }
    }
    if(headOne == NULL){
        finalTail->next = headTwo;
    }
    if(headTwo == NULL){
        finalTail->next = headOne;
    }
    return finalHead;
    }
};