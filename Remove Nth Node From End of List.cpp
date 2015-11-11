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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;
        ListNode* dump = new ListNode(-1);
        dump->next = head;
        ListNode* fast = dump;
        ListNode* slow = dump;
        int count = n;
        while(fast->next != NULL) {
            if(count <= 0) {
                slow = slow->next;
            }
            fast = fast->next;
            count--;
        }
        slow->next = slow->next->next;
        return dump->next;
    }
};
