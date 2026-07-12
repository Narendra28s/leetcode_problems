class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = INT_MIN;
        int freq= 0;
        for (int i =0;i<nums.size();i++){
           if(1!=nums[i])freq = 0;
           else freq++;
           maxCount=max(maxCount,freq);
       }
       return maxCount;
        
    }
};