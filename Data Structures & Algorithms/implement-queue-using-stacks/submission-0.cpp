class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(og.size()){
            dmy.push(og.top());
            og.pop();
        }
        dmy.push(x);

        while(dmy.size()){
            og.push(dmy.top());
            dmy.pop();
        }
    }
    
    int pop() {
        int value=og.top();
        og.pop();
        return value;
    }
    
    int peek() {
        if(og.size()){
            return og.top();
        }
        return -1;
    }
    
    bool empty() {
        return og.empty();
    }
    stack<int> og,dmy;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */