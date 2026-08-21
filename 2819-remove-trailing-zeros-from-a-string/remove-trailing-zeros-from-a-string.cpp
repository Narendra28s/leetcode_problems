class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length()-1;
        if (num[n] != '0')return num;
        while(!num.empty() && num.back()  == '0'){
            num.pop_back();
        }
        return num;
    }
};