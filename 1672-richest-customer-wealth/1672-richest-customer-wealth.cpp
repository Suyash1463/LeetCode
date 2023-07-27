#include <vector>
#include <climits> // For INT_MIN

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        std::vector<int> wealth;
        for (int i = 0; i < accounts.size(); i++) {
            int pWealth = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                pWealth += accounts[i][j];
            }
            wealth.push_back(pWealth);
        }
        int maxWealth = INT_MIN; // Initialize to a very small value
        for (int i = 0; i < wealth.size(); i++) {
            if (wealth[i] > maxWealth) {
                maxWealth = wealth[i];
            }
        }
        return maxWealth;
    }
};
