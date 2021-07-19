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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int cnt = len-n-1;
        // if(cnt < 0){
        //     head = NULL;
        //     return head;
        // }
        int newLen = 0;
        while(newLen != cnt){
            if(cnt == -1){
                break;
            }
            newLen++;
            temp1=temp1->next;
        }
        if(cnt == -1){
            temp1 = temp1->next;
            return temp1;
        }
        temp1->next = temp1->next->next;
        return head;
    }
};