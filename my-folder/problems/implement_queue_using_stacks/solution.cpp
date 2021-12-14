class MyQueue {
public:
    stack<int> stk;
    stack<int> stk1;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        while(!stk.empty()){
            stk1.push(stk.top());
            stk.pop();
        }
        int returnedValue = stk1.top();
        stk1.pop();
        while(!stk1.empty()){
            stk.push(stk1.top());
            stk1.pop();
        }
        return returnedValue;
    }
    
    int peek() {
        while(!stk.empty()){
            stk1.push(stk.top());
            stk.pop();
        }
        int top = stk1.top();
        while(!stk1.empty()){
            stk.push(stk1.top());
            stk1.pop();
        }
        return top;
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */