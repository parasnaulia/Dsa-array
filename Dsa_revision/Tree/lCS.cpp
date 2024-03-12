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
            this->left = NULL;
            this->right = NULL;
      }
};
TreeNode *Create(TreeNode *&root)
{
      int data;
      cout << "Enter The data" << endl;
      cin >> data;
      if (data == -1)
      {
            return NULL;
      }
      root = new TreeNode(data);
      cout << "Enter The Left Data" << root->data << endl;
      root->left = Create(root->left);
      cout << "Enter The Right Data" << root->data;
      root->right = Create(root->right);
      return root;
}
int Lcs(TreeNode *root, vector<int> &path, int a)
{
      if (root == NULL)
      {
            return 0;
      }
      path.push_back(root->data);
      if (root->data == a)
      {
            return 1;
      }

      if (Lcs(root->left, path, a))
      {
            return 1;
      }
      if (Lcs(root->right, path, a))
      {
            return 1;
      }
      path.pop_back();
      return 0;
}
int main()
{
      TreeNode *root = NULL;
      Create(root);
      vector<int> path1;
      vector<int> path2;

      Lcs(root, path1, 8);
      Lcs(root, path2, 9);
      for (int i = 0; i < path1.size(); i++)
      {
            cout << path1[i] << " ";
      }
      cout << endl;
      for (int i = 0; i < path2.size(); i++)
      {
            cout << path2[i] << " ";
      }
      // now comapring both the path
      int i = 0;
      int j = 0;
      int ans = 0;
      while (i < path1.size() && j < path2.size())
      {
            if (path1[i] == path2[j])
            {
                  ans = path1[i];
            }
            i++;
            j++;
      }
      cout << "The Lcs is " << ans << endl;
      return 0;
}
// 3 5 6 -1 -1 2 -1 -1 1 -1 -1