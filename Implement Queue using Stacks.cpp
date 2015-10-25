class Queue {
private:
    stack<int> stack_a;
    stack<int> stack_b;
public:
    // Push element x to the back of queue.
    void push(int x) {
        stack_a.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(!stack_a.empty()) {
            int top_ele = stack_a.top();
            stack_a.pop();
            stack_b.push(top_ele);
        }
        stack_b.pop();
        while(!stack_b.empty()) {
            int top_ele = stack_b.top();
            stack_b.pop();
            stack_a.push(top_ele);
        }
    }

    // Get the front element.
    int peek(void) {
        while(!stack_a.empty()) {
            int top_ele = stack_a.top();
            stack_a.pop();
            stack_b.push(top_ele);
        }
        int res = stack_b.top();
        while(!stack_b.empty()) {
            int top_ele = stack_b.top();
            stack_b.pop();
            stack_a.push(top_ele);
        }
        return res;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stack_a.empty() && stack_b.empty();
    }
};
