#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int temp = 0;
        int l = 0;
        int r = 0;
        map<char, int> m;
        
        while (r != s.size()) {
            if (m[s[r]] == 0) {
                m[s[r]]++;
                temp++;
                r++;
                result = max(result, temp);
            } else if (m[s[r]] > 0) {
                m[s[l]]--;
                temp--;
                l++;
            }
        }

        return result;
    }
};


int main() {
  Solution test;

  string nums1 = "abcabcbb";
  string nums2 = "bbbbb";
  string nums3 = "pwwkew";

  cout << "Output 1: " << test.lengthOfLongestSubstring(nums1) << endl;
  cout << "Output 2: " << test.lengthOfLongestSubstring(nums2) << endl;
  cout << "Output 3: " << test.lengthOfLongestSubstring(nums3) << endl;

  return 0;
}
