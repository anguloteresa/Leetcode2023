// 2610. Convert an Array Into a 2D Array With Conditions
// anguloteresa
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> count(nums.size());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); ++i){
            int n = nums[i];
            if (count[n - 1] == ans.size())
                ans.push_back({n});
            else
                ans[count[n - 1]].push_back(n);
            count[n - 1]++;
        }
        return ans;
    }
};