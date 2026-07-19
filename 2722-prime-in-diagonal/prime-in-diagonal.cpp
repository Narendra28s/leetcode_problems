class Solution {
public:
    int prime(int n){
    if (n < 2)
        return false;
        
    for (int i=2 ;i*i<=n;i++){
        if(n%i==0){
            return false ;
        }
    }
    return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int max_val = INT_MIN ; 
        
        for (int i = 0; i < n; i++) {
            if (prime(nums[i][i])){
                max_val = max(max_val, nums[i][i]); 
            }
            int sd =  nums[i][n - i - 1] ; 
            if (prime(sd)){
                max_val = max(max_val, sd);
            }
        }
        if (max_val < 0)return  0 ;
        return max_val;
        
    }

    


};