#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < m+n; i++) {
            if (i >= m) {
                nums1.at(i) = nums2.at(i-m);
            }
        }

        sort(nums1.begin(), nums1.end());
    }
};