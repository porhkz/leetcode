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
    TreeNode* invertTree(TreeNode* root) {
        // Base cases
        if (root == NULL) {
            return root;
        }

        if (root->left != NULL && root->right != NULL) {
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }

        if (root->left == NULL) {
            root->left = root->right;
            root->right = NULL;
        } else if (root->right == NULL) {
            root->right = root->left;
            root->left = NULL;
        }


        // Recursion
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};