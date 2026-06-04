class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        int start =0;
        int end =0;
        double maxavg= INT_MIN;
        double avg =0;
        while(end<nums.size())
        {
             sum+= nums[end];
            if((end-start+1)==k)
            {
                avg = sum/k;
                maxavg = max(avg,maxavg);
                sum-=nums[start];
                start++;
            }
            end++; 
        }
        return maxavg;
    }
};
