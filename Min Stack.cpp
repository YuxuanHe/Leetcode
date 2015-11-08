class MinStack {
public:
    stack<int> all_stack;
    stack<int> part_stack;
    void push(int x) {
        all_stack.push(x);
        if(part_stack.empty() || x <= part_stack.top)
            part_stack.push(x);
    }

    void pop() {
        all_stack.pop();
        if(all_stack.top() == part_stack.top())
            part_stack.pop();
    }

    int top() {
        return all_stack.top();
    }

    int getMin() {
        return part_stack.top();
    }
};
