#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <array>

using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:

    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base cases
        if(p == NULL && q== NULL) {
            return true;
        }

        if (p == NULL || q == NULL || (p->val != q->val)) {
            return false;
        }

        // Recursion
        return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};