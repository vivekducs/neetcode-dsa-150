class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for( const auto &ch:tokens){
            if( ch=="+")
            {
                int a=stk.top();
                stk.pop();
                int b= stk.top();
                stk.pop();
                stk.push(b+a);
            }
            else if( ch=="-")
            {
                int a=stk.top();
                stk.pop();
                int b= stk.top();
                stk.pop();
                stk.push(b-a);
            }
            else if( ch=="*")
            {
                int a=stk.top();
                stk.pop();
                int b= stk.top();
                stk.pop();
                stk.push(b*a);
            }
            else if( ch=="/")
            {
                int a=stk.top();
                stk.pop();
                int b= stk.top();
                stk.pop();
                stk.push(b/a);
            }
            else stk.push(stoi(ch));

        }
        return stk.top();
        
    }
};
