#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result = nums.size();
        int count = 0;
        vector<int> temp;
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;

            if (m[nums[i]] < 3) {
                nums[count] = nums[i];
                count++;
            } else {
                result--;
            }
        }

        return result;

    }
};