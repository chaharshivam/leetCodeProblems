import math
class Solution:
      def minWindow(self, s: str, p: str) -> str:

        """
        We are going to follow the sliding window approach for substrings.
        As we need to keep count of number of characters we will use two hashmaps.
        One to keep char frequency and other to remove and add characters.
        Here the only difference we need to keep track of the exact matched charcaters
        as there may be redundant characters.

        for r in range(0,len(s)):
            #add elements to list,set or hashmap depending on unique character or if keeping count is need
            while condition is not met:
                #Get the first value
                #increase the left pointer or shift the window
            return

        #Step 1: Populate the hashmap with the characters of the pattern.
        #Step 2: Iterate over the string and add each character to the strings hashmap
        #Step 3: When a value of character in dict pattern exactly matches with the value in the strings hashmap,we have match
        # Step 4: Until the no of matches becomes equal to the length of the pattern
            # Step 5: We will keep track of the minimum length of the substring 
            # Step 6: We will keep track of the starting index of the min substring 
            # Step 7: pop out the first character
            # Step 8: The most important step: if that character is already in the pattern and is valid,decrement the match
            # Step 9: increase the left pointer
        Goto step 1 again until r reaches the end of string
        Unpack the right pointer and left pointer from the list and return the substring

        """
        # Add Step 0 to handle a stupid edge case
        if p=="":
            return ""

        mp_pattern, mp_string = {}, {} # Hashmap to keep track of the characters in the pattern and string

        l = 0 # left pointer

        matched = 0 # matched characters

        min_length = math.inf # minimum length of the substring init to infinity
        res=[-1,-1]

        # Populate the hashmap with the characters of the pattern.
        for i in range(len(p)):
            mp_pattern[p[i]] = mp_pattern.get(p[i], 0) + 1 # add to the pattern hashmap

        # Iterate over the string and add each character to the strings hashmap.
        for r in range(len(s)):
            mp_string[s[r]] = mp_string.get(s[r], 0) + 1 # add to the main string hashmap

            if s[r] in mp_pattern and mp_pattern[s[r]] == mp_string[s[r]]: # if the character is in the pattern and matches with the string
                matched += 1 # increment the matched characters

            while matched == len(mp_pattern): # UNTIL the matched characters are equal to the length of the pattern

                if r-l+1<min_length: # if the length is less than the min length
                   res=[l,r]#starting index 
                   min_length=r-l+1 # update the min length

                mp_string[s[l]] -= 1 # pop the first character
                if s[l] in mp_pattern and mp_string[s[l]] < mp_pattern[s[l]]: # if the character is in the pattern and matches with the string
                    matched -= 1 #As the matched string is popped also decrement the matched counter

                l += 1 #increase the left pointer
        l,r=res # get the latest start and end pointers or window size
        return s[l:r+1] if min_length != math.inf else "" # return the min window if its infinity means no min window was found****