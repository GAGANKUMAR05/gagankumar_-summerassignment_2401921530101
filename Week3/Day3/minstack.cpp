class MinStack {
public:
     stack<int>st;
     stack<int>ms;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(ms.empty()|| value<=ms.top())
         ms.push(value);
    }
    
    void pop() {
        if(st.top()==ms.top())
           ms.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return ms.top();
    }
};