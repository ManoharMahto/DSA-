class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // 1. Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            // Check if current interval overlaps with the last merged interval
            if (intervals[i][0] <= ans.back()[1]) {
                // Extend the end boundary to the maximum end seen so far
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } else {
                // No overlap, start a new merged interval
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};