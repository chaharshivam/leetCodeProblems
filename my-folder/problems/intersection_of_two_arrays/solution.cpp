class Solution {
public:
        bool binarySearch(vector<int>& arr,int start,int end,int target){
    for(;start<=end;){
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return true;
        }
        if(target<arr[mid]){
            end = mid-1;
        }
        if(target>arr[mid])
        start = mid+1;
    }
    return false;
}
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        auto it = nums1.begin();
        for(; it!=nums1.end(); it++){
             bool res = binarySearch(nums2,0,nums2.size()-1,*it);
            if(!res)
                continue;
            if(ans.size()==0){
                ans.push_back(*it);
                continue;
            }
            bool res1 = binarySearch(ans,0,ans.size()-1,*it);
            if(res1)
                continue;
            ans.push_back(*it);
        }
        return ans;
            
    }
};