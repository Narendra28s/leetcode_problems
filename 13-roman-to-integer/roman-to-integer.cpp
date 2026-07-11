class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> roman = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        int ans = 0;
        int i = 0;

        while (i < s.size()) {

            int curr = roman[s[i]];

            if (i < s.size() - 1) {

                int next = roman[s[i + 1]];

                if (curr < next)
                    ans -= curr;
                else
                    ans += curr;
            }
            else {
                ans += curr;
            }

            i++;
        }

        return ans;
    }
};