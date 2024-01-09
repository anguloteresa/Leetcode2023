// 300. Longest Increasing Subsequence
// anguloteresa
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 1) return 1;
        vector<int> dp(nums.size(), 1);
        for (int i = 0 ; i < nums.size(); ++i){
            for (int j = 0; j < i; ++j){
                if (nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j]+1);
                }   
            }
        }
        int ans = 0;
        for(auto a: dp)
            (ans < a) ? ans = a : ans;
        return ans;
    }
};