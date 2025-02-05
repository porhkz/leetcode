#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int result = nums.size();
        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                result--;
            } else {
                temp.push_back(nums[i]);
            }
        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return result;
    }
};