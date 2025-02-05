#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        vector<int> temp;
        vector<int> temp2;

        int rotate = k % nums.size();

        for (int i = nums.size() - rotate; i < nums.size(); i++) {
            temp.push_back(nums[i]);
        }
        
        for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << endl;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i < temp.size()) {
                temp2.push_back(temp[i]);
            } else {
                temp2.push_back(nums[count]);
                count++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = temp2[i];
        }
    }
};