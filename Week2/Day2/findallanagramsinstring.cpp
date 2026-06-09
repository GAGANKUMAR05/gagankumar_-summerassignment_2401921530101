class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size())
         return{};
        vector<int>ans;
        vector<int>count(26,0);
        for(char c:p)
        {
            count[c-'a']++;
        }
        int req = p.size();
        int start=0,end=0;
        while(end<p.size())
        {
            count[s[end]-'a']--;
            if(count[s[end]-'a']>=0)
             req--;
            end++;
        }
        if(req==0)
         ans.push_back(start);

        while(end<s.size())
        {
            count[s[start]-'a']++;
            if(count[s[start]-'a']>0)
             req++;
            start++;
            
            count[s[end]-'a']--;
            if(count[s[end]-'a']>=0)
              req--;
            end++;
            if(req==0)
            ans.push_back(start);
        }
        return ans;
    }
};