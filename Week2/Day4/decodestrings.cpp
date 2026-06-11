class Solution {
public:
    string decodeString(string s) {
        stack<int> countS;
        stack<string> stringS;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                countS.push(num);
                stringS.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int repeat = countS.top();
                countS.pop();

                string prev = stringS.top();
                stringS.pop();

                string temp = "";
                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};