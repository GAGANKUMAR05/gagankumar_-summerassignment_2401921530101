class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[0]==')'||s[0]=='}'||s[0]==']')
            return 0;
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.top()=='(')
                st.pop();
                else
                st.push(s[i]);
            }
             else if(s[i]=='}')
            {
                if(st.top()=='{')
                st.pop();
                else
                st.push(s[i]);
            }
            else if(s[i]==']')
             {
                if(st.top()=='[')
                st.pop();
                else
                st.push(s[i]);
            }
            else st.push(s[i]);
        }
        return (st.empty());
    }
};