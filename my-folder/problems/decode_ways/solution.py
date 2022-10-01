class Solution:
    m = {} # memo maps (string) |-> (number of decodings possible over that string)
    
    def numDecodings(self, s: str) -> int:
        if s in self.m: return self.m[s]
        
        # Base Cases: 
        if not s: # 1 possible decoding of the empty string: 'nothing'
            self.m[s] = 1
        elif s[0] == "0": # no possible decodings of any string beginning with '0'
            self.m[s] = 0
        elif len(s) == 1: # since the single character in s is not '0', it has one possible decoding: A ... I
            self.m[s] = 1
        else: # Recursive Case:
            #   The number of decodings of s is the number of decodings over s when we take
            #   s[0] at this step plus the number of decodings over s when we take (s[0] + s[1])
            #   at this step.
            leftSum = self.numDecodings(s[1:])
            rightSum = 0 if int(s[0] + s[1]) > 26 else self.numDecodings(s[2:])
            self.m[s] = leftSum + rightSum
        
        return self.m[s]