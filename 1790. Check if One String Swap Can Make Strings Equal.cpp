#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;
        vector<pair<char, char>> vec;
        bool result = false;

        for (int i = 0; i < s1.size(); i++) {
            if (count > 2) {
                break;
            }

            if (s1[i] != s2[i]) {
                vec.push_back({s1[i], s2[i]});
                count++;
            }
        }

        if (count == 2) {
            if (vec[0].first == vec[1].second &&
                vec[0].second == vec[1].first) {
                result = true;
            }
        } else if (count == 1 && vec[0].first == vec[0].second) {
            result = true;
        } else if (count == 0) {
            result = true;
        }

        return result;
    }
};

