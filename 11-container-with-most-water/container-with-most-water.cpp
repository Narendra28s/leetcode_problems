class Solution {
public:
    int maxArea(vector<int>& height) {
        int st= 0;
        int end=height.size()-1;
        int maxWater=0;

        while(st<end){
            int w = end-st;
            int ht = min(height[st] , height[end]);
            int currWater = w * ht ; 

            maxWater = max(maxWater , currWater);

            height[st] < height[end] ? st++ : end--;
        }
        return maxWater;
        
    }
};