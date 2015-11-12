class Solution {
public:
    bool isValid(string s) {
        stack<char> my_stack;
        my_stack.push('*');
        for(int i= 0; i<s.size(); i++) {
            switch (s[i]) {
                case '(':   my_stack.push_back(')'); break;
                case '[':   my_stack.push_back(']'); break;
                case '{':   my_stack.push_back('}'); break;
                case ')':
                case ']':
                case '}':   if(my_stack.top() == s[i]) my_stack.pop(); else return false;
            }
        }
    }
};
