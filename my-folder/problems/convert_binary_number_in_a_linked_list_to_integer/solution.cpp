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
    // int getDecimal(ListNode* head, int power){
    //     if(head == NULL)
    //         return 0;
    //     int decimal = getDecimal(head->next, power+1);
    //     decimal += head->val * pow(2,power);
    //     return decimal;
    // }
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        int i = 0;
        int decimal = 0;
        auto it = v.begin();
        int power = v.size();
        while(!v.empty()){
            decimal += *it * pow(2,--power);
            v.erase(it);
            
        }
        return decimal;
    }
};