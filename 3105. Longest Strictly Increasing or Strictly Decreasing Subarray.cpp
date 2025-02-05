#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int result = 0;
        int temp = 1;
        int a = 0;
        int b = 1;

        if (nums.size() == 1) {
            result = 1;
        } else if (nums.size() == 2 && nums[a] != nums[b]) {
            result = 2;
        } else {
            while (a != nums.size() - 1 && b != nums.size()) {
                if (nums[b] > nums[b-1]) {
                    temp++;
                    b++;
                } else {
                    a++;
                    b = a+1;
                    temp = 1;
                }
                
                if (temp >= result) {
                    result = temp;
                }
            }

            temp = 1;
            a = 0;
            b = 1;

            while (a != nums.size() - 1 && b != nums.size()) {
                if (nums[b] < nums[b-1]) {
                    temp++;
                    b++;
                } else {
                    a++;
                    b = a+1;
                    temp = 1;
                }
                
                if (temp >= result) {
                    result = temp;
                    cout << result << endl;
                }
            }

        }
        return result;
    }
};

