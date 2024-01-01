// 455. Assign Cookies
// angulo.teresa
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0, i = g.size() - 1, j = s.size() - 1;
        while (i >= 0 && j >= 0){
            if(g[i] <= s[j])
                ans++, j--;
            i--;
        }
        return ans;
    }
};