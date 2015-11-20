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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dump = new ListNode(-1);
        dump->next = head;
        ListNode* pre = dump;
        ListNode* cur = pre->next;
        while(cur != NULL) {
            ListNode* pos = cur->next;
            while (pos != NULL && (cur->val == pos->val)) {
                pos = pos -> next;
            }
            if(pos == cur->next) {
                pre = cur;
                cur = cur->next;
            }
            else {
                cur = pos;
                pre->next = cur;
            }
        }
        return dump->next;
    }
};
