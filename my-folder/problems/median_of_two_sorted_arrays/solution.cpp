class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() + nums2.size() == 1 ){
            if(nums1.size())
                return nums1[0];
            else return nums2[0];
            
        }
        vector<int> v;
        for(int i = 0; i<nums1.size(); i++)
            v.push_back(nums1[i]);
        for(int j = 0; j<nums2.size(); j++)
            v.push_back(nums2[j]);
        sort(v.begin(), v.end());
        if(v.size()%2 != 0){
          int pos = v.size()/2;
            if(v.at(pos) == 0)
                return 0;
            return v.at(pos);
        }else{
            int pos1 = v.size()/2;
            int pos2 = pos1 + 1;
            if(v.at(pos1-1) + v.at(pos2-1) == 0)
                return 0;
            return (v.at(pos1-1) + v.at(pos2-1))/2.00;
        }
    }
};