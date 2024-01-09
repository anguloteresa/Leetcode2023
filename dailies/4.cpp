// 2870. Minimum Number of Operations to Make Array Empty
// anguloteresa
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> count;
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(count.find(nums[i])!=count.end())
                count[nums[i]] = count[nums[i]] + 1;
            else
                count.insert({nums[i], 1});
        }
        for(const auto& it : count){
            if(it.second == 1)
                return -1;
            else
                ans += (it.second + 3 - 1) / 3;
        }
        return ans;
    }
};