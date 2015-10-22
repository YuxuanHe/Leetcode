/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
      if(root == NULL)
        return;
      queue<TreeLinkNode*> myqueue;
      myqueue.push(root);
      int count = 0;
      int right_most_node = 2;
      while(!myqueue.empty()) {
          TreeLinkNode* cur_node = myqueue.front();
          myqueue.pop();
          TreeLinkNode* next_node;
          count++;
          if(count == right_most_node - 1) {
            next_node = NULL;
            right_most_node = right_most_node<<1;
          }
          else {
              next_node = myqueue.front();
          }
          cur_node->next = next_node;
          if(cur_node->left)
            myqueue.push(cur_node->left);
          if(cur_node->right)
            myqueue.push(cur_node->right);
      }
    }
};
