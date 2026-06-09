class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int>count(26,0);
        int num =s1.size();
        for(char c:s1)
        { 
            count[c-'a']++;
        }
        int start = 0,end =0;
        while(end<s1.size())
        {
            count[s2[end]-'a']--;
            if(count[s2[end]-'a']>=0)
             num--;
            end++;
        }
        if(num==0)
         return true;
        while(end<s2.size())
        {
            count[s2[start]-'a']++;
            if(count[s2[start]-'a']>0)
              num++;
            start++;

            count[s2[end]-'a']--;
            if(count[s2[end]-'a']>=0)
             num--;
            end++;

            if(num==0)
             return true;
        }
        return false;
    }
};