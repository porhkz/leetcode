#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalGoodPos = nums.size() - 1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i + nums[i] >= finalGoodPos) {
                finalGoodPos = i;
            }
        }

        return finalGoodPos == 0;
    }
};