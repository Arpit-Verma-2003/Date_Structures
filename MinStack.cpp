class MinStack {
public:
    long long mini;
    stack<long long> st;
    MinStack() {
        mini = -1;
    }
    
    void push(int num) {
        if (st.empty()) {
            st.push(num);
            mini = num;
        } else {
            if (num < mini) {
                st.push(num * 2LL - mini);
                mini = num;
            } else {
                st.push(num);
            }
        }
    }
    
    void pop() {
        if (st.empty()) {
            return ;
        }
        long long el = st.top();
        st.pop();
        if (el < mini) {
            mini = 2 * mini - el;
        } 
    }
    
    int top() {
        if (st.empty()) {
            return -1;
        }

        long long el = st.top();
        if (el < mini) {
            return mini;
        } else {
            return el;
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
