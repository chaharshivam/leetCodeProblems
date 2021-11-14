class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        vector<int> nums3;
        while(i<(nums1.size()-nums2.size()) && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                nums3.push_back(nums1[i++]);
            }
            else
                nums3.push_back(nums2[j++]);
        }
        while(i<(nums1.size()-nums2.size())){
            nums3.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            nums3.push_back(nums2[j++]);
        }
        nums1.clear();
        for(auto it: nums3){
            nums1.push_back(it);
        }
    }
};