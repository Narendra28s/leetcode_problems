class Solution {
public:
    string removeDuplicates(string s, int k) {
  
        int i  = 1 ;
        int count = 1 ;
        while(i < s.length()){
                if(s[i-1] == s[i]){
                    count++;
                }else{
                    count = 1 ;
                }    
                if(count == k){
                    s.erase(i-k+1 , k );
                    i = 1;
                    count = 1 ; 
                }
                else{
                    i++;
                }
        }
        return s;
        
    }
};