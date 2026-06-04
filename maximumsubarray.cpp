class Solution {
public:
      int maxSubArray(vector<int>&nums){
        int prefixsum = 0;
        int maxsum = INT_MIN;
        for(int i=0:i<nums.size();i++)
        {
            prefixsum+=nums[i];
            maxsum = max(maxsum,prefixsum);
            if(prefix<0)
             prefix =0;
        }

        return maxsum;
      }

};
