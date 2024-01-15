// 2225. Find Players With Zero or One Losses
// anguloteresa
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> count;
        for(auto el: matches){
            count[el[0]] += 0;
            count[el[1]] += 1;
        }
        vector<vector<int> > answer(2);
        for(auto el: count){
            if(el.second == 0)
                answer[0].push_back(el.first);
            else if(el.second == 1)
                answer[1].push_back(el.first);
        }
        return answer;
    }
};