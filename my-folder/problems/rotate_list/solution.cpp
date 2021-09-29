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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        ListNode* temp = head;
        ListNode* lenTemp = head;
        int length = 0;
        while(lenTemp != NULL){
            lenTemp = lenTemp->next;
            length++;
        }
        if(k > length)
            k = k%length;
        int cnt = 1;
        while(k != 0){
           while(cnt != length-1){
               temp = temp->next;
               cnt++;
           }
            temp->next->next = head;
            head = temp->next;
            temp->next = NULL;
            temp = head;
            cnt = 1;
            k--;
        }
        return head;
    }
};