#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool wordPattern(string pattern, string s) {
    map<char, string> m;
    map<string, int> checkMap;
    bool result = true;

    vector<string> words;
    stringstream ss(s);
    string word;

    while (ss >> word) {
      words.push_back(word);
    }

    if (words.size() != pattern.size()) {
        return false;
    }

    for (int i = 0; i < pattern.size(); i++) {
      if (m[pattern[i]].empty()) {
        m[pattern[i]] = words[i];
        checkMap[words[i]]++;
      } else {
        if (m[pattern[i]] != words[i]) {
            result = false;
            break;
        } 
      }

      if (checkMap[words[i]] > 1) {
        result = false;
        break;
      }
    }

    
    return result;
  }
};

int main() {
  Solution test;

  string rn1 = "abba";
  string m1 = "dog cat cat dog";

  string rn2 = "abba";
  string m2 = "dog cat cat fish";

  string rn3 = "aaaa";
  string m3 = "dog cat cat dog";

  string rn4 = "abba";
  string m4 = "dog dog dog dog";

  cout << "Output 1: " << test.wordPattern(rn1, m1) << endl;
  cout << "Output 2: " << test.wordPattern(rn2, m2) << endl;
  cout << "Output 3: " << test.wordPattern(rn3, m3) << endl;
  cout << "Output 4: " << test.wordPattern(rn4, m4) << endl;

  return 0;
}
