class Stack {
public:
	queue<int> my_que_A;
    // Push element x onto stack.
    void push(int x) {
        my_que_A.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        int len = my_que_A.size();
	    for(int i=0; i<len-1; i++) {
			my_que_A.push(my_que_A.front());
			my_que_A.pop();
	    }
		my_que_A.pop();
    }

    // Get the top element.
    int top() {
        return my_que_A.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return my_que_A.empty();
    }
};