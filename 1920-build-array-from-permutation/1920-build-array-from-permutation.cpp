class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> vect(size(nums));
        for (int i = 0; i < size(nums); i++){
            vect[i] = nums[nums[i]];
        }
        return vect;
    }
};