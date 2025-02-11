#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int result = 0;
        int left = 0;
        int right = 0;

        while (right < nums.size() - 1) {
            int maxJump = 0;
            for (int i = left; i < right + 1; i++) {
                maxJump = max(maxJump, i + nums[i]);
            }

            left = right + 1;
            right = maxJump;
            result++;
        }

        return result;
    }
};

int main() {
    Solution test;

    vector<int> nums1 = {2,3,1,1,4};
    vector<int> nums2 = {2,3,0,1,4};

    cout << "Output 1: " << test.jump(nums1) << endl;
    cout << "Output 2: " << test.jump(nums2) << endl;

    return 0;
}
