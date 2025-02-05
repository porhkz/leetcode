#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool result = true;
        int pos = 0;
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] < nums[i]) {
                pos = i;
                count++;
            }
        }

        if (count > 1) {
            result = false;
        } else if (count == 1) {
            for (int i = pos + 1; i < nums.size() - 1; i++) {
                if (nums[i+1] < nums[i]) {
                    result = false;
                    break;
                }
            }

            if (nums[nums.size() -1] > nums[0]) {
                result = false;
            }
        }

        return result;
    }
};