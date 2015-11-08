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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_A = 0;
        int len_B = 0;
        while(headA) {
            headA = headA->next;
            len_A++;
        }
        while(headB) {
            headB = headB->next;
            len_B++;
        }
        if(len_A < len_B) {
			swap(headA, headB);
			swap(len_A, len_B);
		}
		while(len_A > len_B) {
			headA = headA->next;
			len_A--;
		}
		while(headA) {
			if(headA == headB)
				return headA;
		}
		return NULL;
    }
};