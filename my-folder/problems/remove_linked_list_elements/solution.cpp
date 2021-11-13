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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return NULL;
        map<int,int> mp;
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            if(temp->val != val){
                mp[count++] = temp->val;
            }
            temp=temp->next;
        }
        auto it = mp.begin();
        ListNode* newHead = NULL;
        ListNode* tail = NULL;
        while(it!=mp.end()){
            ListNode* newNode = new ListNode((*it).second);
            if(newHead == NULL){
                newHead = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            it++;
        }
        return newHead;
    }
};