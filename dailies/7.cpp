// 446. Arithmetic Slices II - Subsequence
// anguloteresa
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int> & nums) {
        int ans = 0;
        vector< unordered_map<long, int> > dp(nums.size());
        for (int i = 1; i < nums.size(); ++i){
            for (int j = 0; j < i; ++j){
                long long change = (long long)nums[i] - nums[j];
                if ((change >= INT_MIN) && (change <= INT_MAX)){
                    if (dp[j].count(change)){
                        ans += dp[j][change];
                        dp[i][change] += dp[j][change];
                    }
                    dp[i][change]++;
                }
            }
        }
        return ans;
    }
};