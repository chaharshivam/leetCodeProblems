class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums.at(mid) == target){
                if(mid == 0 || nums.at(mid - 1) != target){
                    res.push_back(mid);
                    break;
                }
                else
                    end = mid - 1;
            }
            else if(nums.at(mid) > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        start = 0;
        end = nums.size() - 1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums.at(mid) == target){
                if(mid == nums.size() - 1 || nums.at(mid + 1) != target){
                    res.push_back(mid);
                    break;
                }
                else
                    start = mid + 1;
            }
            else if(nums.at(mid) > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        if(res.size() == 0)
            return {-1,-1};
        else
            return res;
    }
};