class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string ans = "";
        while(ss>>words)
        {
            reverse(words.begin(),words.end());
            ans = ans+words;
            ans= ans+" ";
        }
        ans.pop_back();
        return ans;
    }
};