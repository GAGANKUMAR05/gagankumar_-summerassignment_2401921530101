class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for (string token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int second = st.top(); st.pop();
            int first = st.top(); st.pop();
            int res;

            if (token == "+") res = first + second;
            else if (token == "-") res = first - second;
            else if (token == "*") res = first * second;
            else res = first / second;  

            st.push(res);
        } else {
            st.push(stoi(token));
        }
    }

    return st.top();
}
    
};