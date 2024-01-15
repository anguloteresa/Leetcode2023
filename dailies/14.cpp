// 1657. Determine if Two Strings Are Close
// anguloteresa
#include <string>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;
        vector<int> countW1(26, 0);
        vector<int> countW2(26, 0);
        for (int i = 0; i < word1.size(); ++i)
            countW1[word1[i]-97]++, countW2[word2[i]-97]++;
        for (int i = 0; i < countW1.size(); ++i)
            if((countW1[i] && !countW2[i]) || (countW2[i] && !countW1[i])) return false;
        sort(countW1.begin(), countW1.end(), greater<int>());
        sort(countW2.begin(), countW2.end(), greater<int>());
        for (int i = 0; i < countW1.size(); ++i){
            if((countW1[i] != countW2[i])) return false;
            if(countW1[i] == 0 && countW2[i] == 0) return true;
        }
        return true;
    }
};