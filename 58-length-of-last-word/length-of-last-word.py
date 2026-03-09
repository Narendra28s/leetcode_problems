class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        l = len(s) - 1
        lg = 0
        i = l

        while (i >= 0 and s[i] == " "):
            i -= 1

        while (i >= 0 and s[i] != " "):
            lg = lg + 1
            i -= 1

        return(lg)
                