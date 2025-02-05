#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> preVec;
        long long sum = 0;
        long long result = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums.at(i);
            preVec.push_back(sum);
        }
        
        long long right = preVec.at(preVec.size() - 1);
        cout << right << endl;

        for(int i = 0; i < preVec.size() - 1; i++){
            if(preVec.at(i) >= right - preVec.at(i)) {
                result++;
            }
        }

        return result;
    }
};

// [10,  4, -8,  7]
// [10, 14,  6, 13]

// [2, 3, 1, 0]
// [2, 5, 6, 6]