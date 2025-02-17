#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;
        map<char, char> m3;

        bool result = true;

        for (int i = 0; i < s.size(); i++) {
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            
            if (m3[s[i]] == 0) {
                m3[s[i]] = t[i];
            } else if (m3[s[i]] != t[i]) {
                result = false; 
                break;
            }

            if (m1[s[i]] != m2[t[i]]) {
                result = false;
                break;
            } else {
                m1[s[i]]--;
                m2[t[i]]--;
            }
        }

        return result;
    }
};


int main() {
  Solution test;

  string rn1 = "egg";
  string m1 = "add";

  string rn2 = "foo";
  string m2 = "bar";

  string rn3 = "ab";
  string m3 = "ab";

  string rn4 = "bbbaaaba";
  string m4 =  "aaabbbba";

//   cout << "Output 1: " << test.isIsomorphic(rn1, m1) << endl;
//   cout << "Output 2: " << test.isIsomorphic(rn2, m2) << endl;
//   cout << "Output 3: " << test.isIsomorphic(rn3, m3) << endl;
//   cout << "Output 3: " << test.isIsomorphic(rn4, m4) << endl;

  return 0;
}
