class MinStack {
public:
    stack<int>st, minS;
    MinStack() {
        stack<int>st;
    }
    
    void push(int value) {
        st.push(value);
        if(minS.empty()){
            minS.push(value);
        }
        else{
            minS.push(min(value, minS.top()));
        }
        
        
    }
    
    void pop() {
        if(!st.empty())st.pop();
        minS.pop();
        
    }
    
    int top() {
        if(!st.empty())return st.top();
        return 0;
        
    }
    
    int getMin() {
        return minS.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
