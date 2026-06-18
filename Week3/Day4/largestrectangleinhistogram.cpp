class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int,int>> st;
        int ans = 0;

        for(int i = 0; i < heights.size(); i++) {

            int start = i;

            while(!st.empty() && st.top().first > heights[i]) {

                int h = st.top().first;
                int idx = st.top().second;
                st.pop();

                ans = max(ans, h * (i - idx));
                start = idx;
            }

            st.push({heights[i], start});
        }

        while(!st.empty()) {

            int h = st.top().first;
            int idx = st.top().second;
            st.pop();

            ans = max(ans, h * ((int)heights.size() - idx));
        }

        return ans;
    }
};