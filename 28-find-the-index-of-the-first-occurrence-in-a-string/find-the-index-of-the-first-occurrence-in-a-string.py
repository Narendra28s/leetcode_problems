class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        l = len(needle)
        h = len(haystack)

        i = 0
        j = 0

        while j < h:
            if haystack[j] == needle[i]:
                j += 1
                i += 1
                if i == l:
                    # print(j - l)
                    # break
                    return j - l
            else:
                j = j - i + 1
                i = 0

        return -1
        