class MinStack {
public:
    stack<int>stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);

        
    }
    
    void pop() {
      
        stk.pop();
        
    }
    
    int top() {
       
       return stk.top();
       
        
    }
    
    int getMin() {
        stack<int>temp;
        int minVal=stk.top();
        while( stk.size()){
            minVal= min( minVal,stk.top());
            temp.push(stk.top());
            stk.pop();
        }
        while( temp.size()){
            stk.push(temp.top());
            temp.pop();
        }
        return minVal;
        
    }
};
