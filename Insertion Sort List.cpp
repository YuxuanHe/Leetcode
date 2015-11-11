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
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* dump = new ListNode(-1);
        dump->next = head;
        ListNode* cur = head->next;
        ListNode* pre = head;
        while(cur) {
            ListNode* insert_pos = dump;
            while(insert_pos->next->val < cur->val) {
                insert_pos = insert_pos->next;
            }
            if(insert_pos->next != cur) {
                ListNode* pos = cur->next;
                pre->next = cur->next;
                cur->next = insert_pos->next;
                insert_pos->next = cur;
                cur = pos;
            }
            else {
                pre = cur;
                cur = cur->next;
            }
        }
        return dump->next;
    }
};
