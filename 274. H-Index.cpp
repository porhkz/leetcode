#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int result = citations[0];

        for (int i = 0; i < citations.size(); i++) {
            
            if (citations[i] >= (citations.size() - i)) {
                result = citations[i];
                break;
            }
        }

        return result;
    }
};


int main() {
    Solution test;

    vector<int> nums1 = {3,0,6,1,5};
    vector<int> nums2 = {1,3,1};
    vector<int> nums3 = {4,6,2,7,0,5,3,7};

    // cout << "Output 1: " << test.hIndex(nums1) << endl;
    // cout << "Output 2: " << test.hIndex(nums2) << endl;
    cout << "Output 3: " << test.hIndex(nums3) << endl;

    return 0;
}

// 29m

// [3,0,6,1,5]
// [0,1,3,5,6]

// [1,3,1]
// [1,1,3]

// [4,6,2,7,0,5,3,7]
// [0,2,3,4,5,6,7,7] size = 8
// 7 pages 2 cites
// 6 pages 3 cites
// 5 pages 4 cites
// 4 pages 5 cites