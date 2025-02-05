#include <math.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

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
  vector<int> rightSideView(TreeNode* root) {
    vector<int> result;

    if (root == NULL) {
      return result;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      int n = q.size();
      TreeNode* temp = q.back();

      for (int i = 0; i < n; i++) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left != NULL) {
          q.push(node->left);
        }

        if (node->right != NULL) {
          q.push(node->right);
        }
      }

      result.push_back(temp->val);
    }

    return result;
  }
};

// [1]

// n=1
// node=1
// [] pop
// [3] push

// [1]

// n=1
// node=1;
// [] pop
// [2, 3] push

// n=2
// node=2
// [3] pop
// [3,5] push

// n=2
// node=3
// [5, 4] pop
// [] push

// n=2
// node=5
// [4] pop
// push

// n=1
// node=4
// []

// [1]

// n=1
// node=1
// [] pop
// [2,3] push

// n=2
// node=2
// [3] pop
// [3,4] push

// n=2
// node=3
// [4] pop
// [4] push

// n=1
// node=4
// [] pop
// [5] push

// n=1
// node=5
// [] pop
// [] push
