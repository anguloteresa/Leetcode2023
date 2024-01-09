// 2125. Number of Laser Beams in a Bank
// anguloteresa
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int currSecDev = 0;
        int ans = 0;
        for(int i = 0; i < bank.size(); ++i){
            int secDev = count(bank[i].begin(), bank[i].end(), '1');
            if(secDev){
                ans += currSecDev * secDev;
                currSecDev = secDev;
            }
        }
        return ans;
    }
};