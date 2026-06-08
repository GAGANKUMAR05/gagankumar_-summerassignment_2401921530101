class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
        return false;
        unordered_map<char,int>count;
        for(char x:s)
        {
            count[x]++;
        }
        for(char x : t)
        {
           if(count[x]-- <= 0)
            return false;
        }
        return true;

    }
};