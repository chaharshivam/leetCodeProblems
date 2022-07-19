class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> kWeak;
        int arr[mat.size()];
        for(int i = 0; i<mat.size(); i++){
            int soldiers = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1)
                    soldiers++;
            }
            arr[i] = soldiers;
        }
        for(int i = 0; i<k; i++){
            int minIdx = 0;
            for(int j = 0; j<mat.size(); j++){
                if(arr[j] < arr[minIdx])
                    minIdx = j;
            }
            kWeak.push_back(minIdx);
            arr[minIdx] = INT_MAX;
        }
        return kWeak;
    }
};