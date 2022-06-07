class MinStack {
public:
    stack<pair<int,int>>minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(!minStack.empty())
            minStack.push(make_pair(val,min(minStack.top().second,val)));
        else
            minStack.push(make_pair(val,val));
    }
    
    void pop() {
        minStack.pop();
    }
    
    int top() {
        return minStack.top().first;
    }
    
    int getMin() {
        return minStack.top().second;
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