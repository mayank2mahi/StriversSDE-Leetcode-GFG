class MyQueue {
public:
    
    stack<int> input;
    stack<int> output;
    int peekEl = -1;
    
    MyQueue() {
        
    }
    
    
    void push(int x) {
        if(input.empty()) {
            peekEl = x;
        }
        input.push(x);   //ye to har baar karna hai
    }
    
    
    //amortized O(1)
    int pop() {
        if(output.empty()) {
            
            //input -> output O(n)
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();   //O(1)
        output.pop();
        return val;
    }
    
    
    int peek() {
        if(output.empty())
            return peekEl;
        else{
            return output.top();
        }
    }
    
    
    bool empty() {
        if(input.empty() && output.empty())
            return true;
        else{
            return false;
        }
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