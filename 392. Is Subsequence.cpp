#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sCount = 0;
        int tCount = 0;
        bool result = false;

        if (s.size() == 0) {
            result = true;
        } else {
            while(sCount < s.size() && tCount < t.size()) {
                if (s[sCount] != t[tCount]) {
                    tCount++;
                } else if (s[sCount] == t[tCount]) {
                    sCount++;
                    tCount++;
                }

                if (sCount == s.size()) {
                    result = true;
                } else {
                    result = false;
                }
            }
        }


        return result;
    }
};