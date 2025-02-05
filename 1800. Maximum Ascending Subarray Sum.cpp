#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int temp = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                temp = temp + nums[i];
            } else {
                temp = nums[i];
            }
            if (temp >= result) {
                result = temp;
            }
        }

        return result;
    }
};

int main() {
    Solution test;

    vector<int> nums1 = {10, 20, 30, 5, 10, 50};
    vector<int> nums2 = {10, 20, 30, 40, 50};
    vector<int> nums3 = {12, 17, 15, 13, 10, 11, 12};

    cout << "Output 1: " << test.maxAscendingSum(nums1) << endl; // Expected: 65
    cout << "Output 2: " << test.maxAscendingSum(nums2) << endl; // Expected: 150
    cout << "Output 3: " << test.maxAscendingSum(nums3) << endl; // Expected: 33

    return 0;
}
