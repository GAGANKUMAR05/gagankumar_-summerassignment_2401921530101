class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = INT_MIN;
        int area= 0;
        int start =0,end = height.size()-1;
        while(start<end)
        {
            area = min(height[start],height[end])*(end-start);
            maxarea = max(area,maxarea);
            if(height[start]<height[end])
             start++;
            else end--;
        }
        return maxarea;
    }
};
