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

    void helper(ListNode* dump, int m, int n) {
        ListNode* pre = dump->next;
        ListNode* cur = pre->next;
        ListNode* pos;
        int count = m;
        while(count++ != n) {
            pos = cur->next;
            cur->next = pre;
            pre = cur;
            cur = pos;
        }
        dump->next->next = cur;
        dump->next = pre;

    }

    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* dump = new ListNode(-1);
        ListNode* save = dump;
        dump->next = head;
        for(int i = 1; i < m; i++) {
            dump = dump->next;
        }
        helper(dump, m, n);
        return save->next;
    }
};
