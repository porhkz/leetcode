#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
 public:
  int minSubArrayLen(int target, vector<int>& nums) {
    int count = 0;
    int currSum = 0;
    int result = INT_MAX;
    int l = 0;
    int r = 0;

    while (l < nums.size())
    {
        if (currSum < target && r < nums.size()) {
            currSum += nums[r];
            r++;
            count++;
        } else {
            if (currSum >= target) {
                result = min(result, count);
            }

            currSum -= nums[l];
            count--;
            l++;
        }
    }

    if (result == INT_MAX) {
        return 0;
    } else return result;
  }
};


int main() {
  Solution test;

  vector<int> nums1 = {2,3,1,2,4,3};
  vector<int> nums2 = {1,4,4};
  vector<int> nums3 = {1,1,1,1,1,1,1,1};
  vector<int> nums4 = {12,28,83,4,25,26,25,2,25,25,25,12};

  cout << "Output 1: " << test.minSubArrayLen(7, nums1) << endl;
  cout << "Output 2: " << test.minSubArrayLen(4, nums2) << endl;
  cout << "Output 3: " << test.minSubArrayLen(11, nums3) << endl;
  cout << "Output 4: " << test.minSubArrayLen(213, nums4) << endl;

  return 0;
}
