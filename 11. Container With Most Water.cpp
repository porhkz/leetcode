#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int result = 0;

        while (l < r) {
            int temp = (min(height[l], height[r])) * (r - l);
            // cout << temp << endl;
            result = max(result, temp);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }

        return result;

    }
};

int main() {
    Solution test;

    vector<int> nums1 = {1,8,6,2,5,4,8,3,7};

    cout << "Output 1: " << test.maxArea(nums1) << endl;

    // test.maxArea(nums1);

    return 0;
}

// 21m
