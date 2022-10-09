class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        starting = ""
        if len(strs) == 0:
            return starting
        counter = 0
        for ch in strs[0]:
            starting += ch
            for str_ele in strs:
                if str_ele.startswith(starting):
                    counter += 1
                else:
                    if counter == 1:
                        return ""
                    else:
                        return starting[:-1]
        return starting
        