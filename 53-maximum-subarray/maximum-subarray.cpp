class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int best = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            curr_sum += nums[i];

            best = max(curr_sum, best);
            if(curr_sum < 0) {
                curr_sum = 0;
            }
        }
        
        return best;
    }
};