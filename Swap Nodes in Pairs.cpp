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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* pos = head;
        ListNode* fir;
        ListNode* sec;
        head = head->next;
        ListNode* pre = new ListNode(-1);
        while(pos && pos->next) {
            fir = pos;
            sec = fir->next;
            pos = sec->next;
            fir->next = pos;
            sec->next = fir;
            pre->next = sec;
            pre = fir;
        }
        return head;
    }
};
