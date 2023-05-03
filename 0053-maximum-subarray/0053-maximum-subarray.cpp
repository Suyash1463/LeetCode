class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //initialing sum as 0
        int sum = 0;
        
        //initialising maxSum as the first element because we have to return subarray containing
        // atleast one element
        int maxSum = nums[0];
        
        //n as the size of the given array
        int n = nums.size();
        
        
        //traversing the array to find the maximum sum
        for(int i=0; i<n; i++)
        {
            //adding current element into the sum
            sum += nums[i];
            
            //checking if the current sum is greater than the maximum Sum
            maxSum = max(maxSum, sum);
            
            
            //if sum comes out to be negative, it would not give us the maximum sum
            //hence re-declaring it with 0
            if(sum<0)
            {
                sum = 0;
            }
        }
        
        //return the maximum sum of the subarray
        return maxSum;
    }
};