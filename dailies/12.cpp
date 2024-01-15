// 1026. Maximum Difference Between Node and Ancestor
// anguloteresa
#include <string>
using namespace std;

class Solution {
public:
    int countVowels(string s){
        int count = 0;
        for (auto c: s){
            c = tolower(c);
            if(c == 'a' | c == 'e'| c == 'i' | c == 'o' | c == 'u')
                count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        return (countVowels(s.substr(0, s.size() / 2)) == countVowels(s.substr(s.size() / 2, s.size())));
    }
};