class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int i = 0, j = 0;
        while(j<nums.size()){
            if(nums[i] != nums[j]){
                i++;
                nums[i]=nums[j];
            }else{
                j++;
            }
        }
        return i+1;
    }
};