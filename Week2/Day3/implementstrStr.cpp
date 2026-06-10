class Solution {
public:
    void findlps(vector<int>&lps,string needle)
    {
        int n= needle.size();
        int first=0,second=1;
        while(second<n)
        {
            if(needle[first]==needle[second])
            {
                lps[second]=first+1;
                second++;
                first++;
            }
            else
            {
                if(first==0)
                {
                lps[second]=0;
                second++;
                }
                else{
                    first=lps[first-1];
                }
            }
        }
       

    }
    int strStr(string haystack, string needle) {
        vector<int> lps(needle.size(),0);
        findlps(lps,needle);
        int first=0,second=0;
        while(first<haystack.size()&&second<needle.size())
        {
            if(haystack[first]==needle[second])
            {
                second++;
                first++;
            }
            else
            {
                if(second==0)
                {
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }
        if(second==needle.size())
        return first-second;
        else return -1;
    }
};