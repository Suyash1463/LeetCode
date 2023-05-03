class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> seen;

        for (int num : nums1) {
            if (seen.find(num) == seen.end() && find(nums2.begin(), nums2.end(), num) == nums2.end()) {
                ans[0].push_back(num);
                seen.insert(num);
            }
        }

        for (int num : nums2) {
            if (seen.find(num) == seen.end() && find(nums1.begin(), nums1.end(), num) == nums1.end()) {
                ans[1].push_back(num);
                seen.insert(num);
            }
        }

        return ans;
    }
};
