class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
     

        st = strs[0]

        for k in range(1, len(strs)):        
            for i in range(len(st)):        
                if st[:i+1] == strs[k][:i+1]:
                    continue
                else:
                    st = st[:i]
                    break

        return st

        