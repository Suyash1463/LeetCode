class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer(2 * n);
        for (int i = 0; i < n ; i++){
            answer[2 * i] = nums[i];
        }
        for (int i = 0; i < n ; i++){
            answer[(2 * i) + 1] = nums[n + i];
        }
        return answer;
    }
};
