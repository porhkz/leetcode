#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0;
        int b = numbers.size() - 1;
        vector<int> result;

        while (a < b) {
            if (numbers[a] + numbers[b] > target) {
                b--;
            } else if (numbers[a] + numbers[b] < target) {
                a++;
            } else if (numbers[a] + numbers[b] == target) {
                result.push_back(a + 1);
                result.push_back(b + 1);
                break;
            }
        }

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << endl;
        }

        return result;
    }
};

int main() {
    Solution test;

    vector<int> nums1 = {2,7,11,15};
    vector<int> nums2 = {2,3,4};
    vector<int> nums3 = {-1,0};

    test.twoSum(nums1, 9); 
    // test.twoSum(nums2, 6); 
    // test.twoSum(nums3, -1); 

    return 0;
}

// 38m