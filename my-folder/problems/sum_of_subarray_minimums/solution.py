class Solution(object):
    def sumSubarrayMins(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        arr = [0] + arr
        stack = [0] #to remember the smallest num place before i
        result = [0]*len(arr)   #to contain the sum of min for every i
        for i in range(len(arr)):
            while arr[stack[-1]] > arr[i]:
                stack.pop()
            j = stack[-1]
            #print('stack_b:',stack)
            result[i] = result[j] + (i-j)*arr[i]
            stack.append(i)
            #print('stack_a:',stack)
            #print('result:',result)
        
        return sum(result) % (10**9+7)