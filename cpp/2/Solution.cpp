/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* iter = res;
        int carry=0;
        while(l1 || l2 || carry) {
            int sum = 0;
            if (l1) { sum += l1->val; l1=l1->next; }
            if (l2) { sum += l2->val; l2=l2->next; }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* next = new ListNode(sum);
            iter->next = next;
            iter = iter->next;
        }
        return res->next;
    }
};
