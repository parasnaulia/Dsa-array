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
void Inorder_Traversal(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      Inorder_Traversal(root->left);
      cout << root->data << " ";
      Inorder_Traversal(root->right);
}
void Preorder_Traversal(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      cout << root->data << " ";
      Preorder_Traversal(root->left);
      Preorder_Traversal(root->right);
}
void Postorder_Traversal(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      Postorder_Traversal(root->left);
      Postorder_Traversal(root->right);
      cout << root->data << " ";
}
void BFS(TreeNode *root)
{
      queue<TreeNode *> q;
      if (root == NULL)
      {
            return;
      }
      q.push(root);
      while (!q.empty())
      {
            int size = q.size();
            for (int i = 0; i < q.size(); i++)
            {
                  auto temp = q.front();
                  q.pop();
                  cout << temp->data << " ";
                  if (temp->left)
                  {
                        q.push(temp->left);
                  }
                  if (temp->right)
                  {
                        q.push(temp->right);
                  }
            }
      }
}
void ZigZack(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      queue<TreeNode *> q;
      q.push(root);
      int index = 0;
      while (!q.empty())
      {
            int size = q.size();
            for (int i = 0; i < size; i++)

            {
                  auto temp = q.front();
                  q.pop();
                  cout << temp->data << " ";
                  if (index % 2 != 0)
                  {
                        if (temp->left)
                        {
                              q.push(temp->left);
                        }
                        if (temp->right)
                        {
                              q.push(temp->right);
                        }
                  }
                  else
                  {
                        if (temp->right)
                        {
                              q.push(temp->right);
                        }
                        if (temp->left)
                        {
                              q.push(temp->left);
                        }
                  }
            }
            index++;
      }
}
void Left_View(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      queue<TreeNode *> q;
      q.push(root);
      while (!q.empty())
      {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                  TreeNode *temp = q.front();
                  q.pop();
                  if (i == 0)
                  {
                        cout << temp->data << " ";
                  }
                  if (temp->left)
                  {
                        q.push(temp->left);
                  }
                  if (temp->right)
                  {
                        q.push(temp->right);
                  }
            }
      }
}
void Right_View(TreeNode *root)
{
      if (root == NULL)
      {
            return;
      }
      queue<TreeNode *> q;
      q.push(root);
      while (!q.empty())
      {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                  TreeNode *temp = q.front();
                  q.pop();
                  if (i == size - 1)
                  {
                        cout << temp->data << " ";
                  }
                  if (temp->left)
                  {
                        q.push(temp->left);
                  }
                  if (temp->right)
                  {
                        q.push(temp->right);
                  }
            }
      }
}
int Height(TreeNode *root)
{
      if (root == NULL)
      {
            return 0;
      }
      int left = Height(root->left);
      int right = Height(root->right);
      return 1 + max(left, right);
}
int Diameter(TreeNode *root)
{
      if (root == NULL)
      {
            return 0;
      }
      int left = Height(root->left);
      int right = Height(root->right);
      return 1 + left + right;
}
void Leaf_Print(TreeNode *root)
{
      queue<TreeNode *> q;
      if (root == NULL)
      {
            return;
      }
      q.push(root);
      while (!q.empty())
      {
            int size = q.size();
            for (int i = 0; i < q.size(); i++)
            {
                  auto temp = q.front();
                  q.pop();
                  if (temp->left == NULL && temp->right == NULL)
                  {
                        cout << temp->data << " ";
                  }
                  if (temp->left)
                  {
                        q.push(temp->left);
                  }
                  if (temp->right)
                  {
                        q.push(temp->right);
                  }
            }
      }
}

int main()
{
      // This Not The Way to Deal With it
      TreeNode *root = new TreeNode(24);
      TreeNode *root1 = new TreeNode(25);
      TreeNode *root2 = new TreeNode(26);
      TreeNode *root3 = new TreeNode(27);
      root->left = root1;
      root->right = root2;
      root1->left = root3;
      root1->right = NULL;
      cout << "Ineorder" << endl;
      Inorder_Traversal(root);
      cout << endl;
      cout << "PostOrder" << endl;
      Postorder_Traversal(root);
      cout << endl;
      cout << "PretOrder" << endl;
      Preorder_Traversal(root);
      cout << endl;
      cout << "BFS" << endl;
      BFS(root);
      cout << endl;
      cout << " Zig Zack" << endl;
      ZigZack(root);
      cout << endl;
      cout << " Left View" << endl;
      Left_View(root);
      cout << endl;
      cout << " Right View" << endl;
      Right_View(root);
      cout << endl;
      cout << " Height Of A tree" << endl;
      cout << Height(root);
      cout << endl;
      cout << "Diameter Of A tree" << endl;
      cout << Diameter(root);
      cout << endl;
      cout<<"Leaf Values is:"<<endl;
      Leaf_Print(root);

      return 0;
}