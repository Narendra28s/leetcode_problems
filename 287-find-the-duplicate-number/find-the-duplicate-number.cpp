class Solution {
public:
    bool isCount(vector<int>& nums , int mid ){
    int count = 0 ;
    
    for (int  i = 0; i< nums.size() ; i++){
        if(nums[i] <= mid){
            count++ ;
        }
    }
    return count > mid ? true : false ;
}

    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        int maxVal = -1;
        
        for (int i = 0 ; i <  n  ; i++){
            maxVal  = max(maxVal , nums[i]);
        }
        
        int st = 1 , end = maxVal ;
        int ans = 0;
        while(st<=end){
            int mid = st + (end - st) / 2 ;
            
            if(isCount(nums , mid )){
                ans = mid;
                end = mid - 1 ;
            }else{
                st = mid  + 1 ;
            }
        }
        return ans ;
        
    }
};