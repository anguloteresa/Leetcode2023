// 1347. Minimum Number of Steps to Make Two Strings Anagram
// anguloteresa
#include <string>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int, int> count;
        for (int i = 0; i < s.size(); ++i){
            count[s[i]]++;
            count[t[i]]--;
        }
        int ans = 0;
        for (auto el: count)
            ans += abs(el.second);
        return ans / 2;
    }
};