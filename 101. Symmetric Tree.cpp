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
        if(root == NULL) {
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

        invertTree(root->right);
        invertTree(root->left);

        return root;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }

        return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        // Invert right side tree
        invertTree(root->right);
        
        // Base case
        return (isSameTree(root->right, root->left));
    }
};