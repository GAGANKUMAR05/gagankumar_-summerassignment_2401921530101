class Solution {
public:
      int maxProfit(vector<int>&prices){
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i =0;i<prices.size();i++)
        {
            if(price[i]<mini)
            {
                if(i==price.size()-1)
                 break;
                mini = price[i];
                maxi = INT_MIN;
            }
            else if(maxi<price[i]){
                maxi = price[i];
            }
        }
        if(maxi==INT_MIN)
         return 0;
        return maxi-mini;
      } 
};
