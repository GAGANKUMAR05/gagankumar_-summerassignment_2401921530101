class Solution {
public:
    void paren(int n,vector<string>&m,string &temp,int left,int right)
{
    if(left==n&&right == n)
    {
       m.push_back(temp);
       return;
    }
   if(left<n)
   {
      temp.push_back('(');
      paren(n,m,temp,left+1,right);
      temp.pop_back();
   }
   if(right<left)
   {
     temp.push_back(')');
     paren(n,m,temp,left,right+1);
     temp.pop_back();
   }
}
    vector<string> generateParenthesis(int n) {
    vector<string>m ;
    string temp;
    paren(n,m,temp,0,0);
    return m;
    }
};