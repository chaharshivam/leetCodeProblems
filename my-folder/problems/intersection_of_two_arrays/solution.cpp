class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        unordered_set<int> s3;
        for(auto it = nums1.begin(); it!=nums1.end(); it++){
            s1.insert(*it);
        }
        for(auto it = nums2.begin(); it!=nums2.end(); it++){
            s2.insert(*it);
        }
        for(auto it = s1.begin(); it!=s1.end(); it++){
            if(s2.count(*it) > 0){
                s3.insert(*it);
            }
        }
        vector<int> v;
        for(auto it = s3.begin(); it!=s3.end(); it++){
            v.push_back(*it);
        }
        return v;
    }
};