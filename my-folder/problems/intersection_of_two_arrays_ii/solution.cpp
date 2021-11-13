class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i = 0;
        while(i<nums1.size()){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if(it!=nums2.end()){
                v.push_back(nums1[i]);
                nums2.erase(it);
            }
            i++;
        }
        return v;
    }
};