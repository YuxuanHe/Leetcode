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
    ListNode* reverseList(ListNode* head) {
      if(head==NULL || head->next == NULL)
        return head;
      ListNode* pre = head;
      ListNode* cur = head->next;
      ListNode* pos;
      while(cur) {
        pos = cur->next;
        cur->next = pre;
        pre = cur;
        cur = pos;
      }
      head->next = NULL;
      return pre;
    }
};
