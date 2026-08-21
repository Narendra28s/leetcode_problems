class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length()-1;
        if (num[n] != '0')return num;
        int i  =  n ;
        int count = 0 ;
        while(i > 0 && num[i] == '0'){
            count++;
            i--;
        }
        num.erase(n-count+1,n);
        return num;
        
    }
};