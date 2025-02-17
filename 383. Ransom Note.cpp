#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool result = true;

        map<char, int> m;

        for (int i = 0; i < magazine.size(); i++) {
            m[magazine[i]]++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            if (m[ransomNote[i]] == 0) {
                result = false;
                break;
            } else {
                m[ransomNote[i]]--;
            }
        }
        return result;
    }
};


int main() {
  Solution test;

  string rn1 = "a";
  string m1 = "b";

  string rn2 = "aa";
  string m2 = "ab";

  string rn3 = "aa";
  string m3 = "aab";

  cout << "Output 1: " << test.canConstruct(rn1, m1) << endl;
  cout << "Output 2: " << test.canConstruct(rn1, m2) << endl;
  cout << "Output 3: " << test.canConstruct(rn1, m3) << endl;

  return 0;
}
