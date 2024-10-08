class MyQueue {
public:
    MyQueue() {
        
    }
  stack<int>s1,s2;
    
    void push(int x) {
        while(!s1.empty()){   // put all values of s1 in s2 for time being
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);       // push element to the bottom of s1
        while(!s2.empty()){  // get back all value form s2
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
     int n = s1.top();
      s1.pop();
    return n;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
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