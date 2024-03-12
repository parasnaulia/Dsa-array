#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class TreeNode
{
public:
      int data;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int data)
      {
            this->data = data;
            left = NULL;
            right = NULL;
      }
};
void dfs(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      dfs(root->left);
      cout << root->data << " ";
      dfs(root->right);
}
TreeNode *lcs(TreeNode *root, int p, int q)
{
      if (root == NULL || root->data == p || root->data == q)
      {
            return root;
      }
      TreeNode *left = lcs(root->left, p, q);
      TreeNode *right = lcs(root->right, p, q);
      if (left == NULL)
      {
            return right;
      }
      else if (right == NULL)
      {
            return left;
      }
      else
      {
            return root;
      }
}
int main()
{
      TreeNode *root = new TreeNode(1);
      TreeNode *root1 = new TreeNode(2);
      TreeNode *root2 = new TreeNode(3);

      TreeNode *root3 = new TreeNode(4);
      TreeNode *root4 = new TreeNode(5);
      root->left = root1;
      root->right = root2;
      root1->left = root3;
      root1->right = root4;
      dfs(root);

      TreeNode *ans = lcs(root, 4, 5);
      cout << "Ans is:" << endl;
      cout << ans->data << " ";

      return 0;
}
