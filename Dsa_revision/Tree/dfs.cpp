#include<iostream> 
using namespace std;
#include<bits/stdc++.h>
//1 2 4 -1 -1 5 -1 -1 3 -1 -1
class TreeNode
{
      public:
      int data;
      TreeNode*left;
      TreeNode* right;
      TreeNode(int data)
      {
            this->data=data;
            this->left==NULL;
            this->right=NULL;
      }

};

void Print_Leaf(TreeNode* root)
{
      queue<TreeNode*> q;
      if(root==NULL)
      {
            cout<<"Sorry no Element"<<endl;
            return;
      }
      q.push(root);
      vector<int> ans;
      while(!q.empty())
      {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                  auto temp=q.front();
                  q.pop();
                  if(temp->left==NULL&&temp->right==NULL)
                  {
                        cout<<temp->data<<" ";
                  }
                  if(temp->left)
                  {
                        q.push(temp->left);
                  }
                  if(temp->right)
                  {
                        q.push(temp->right);
                  }
                  
            }


      }
}
void Left_View(TreeNode* root)
{
      queue<TreeNode*> q;
      if(root==NULL)
      {
            cout<<"Sorry no Element"<<endl;
            return;
      }
      q.push(root);
      vector<int> ans;
      while(!q.empty())
      {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                  auto temp=q.front();
                  q.pop();
                  if(i==0)
                  {
                        cout<<temp->data<<" ";
                  }
                 
                  if(temp->left)
                  {
                        q.push(temp->left);
                  }
                  if(temp->right)
                  {
                        q.push(temp->right);
                  }
                  
            }


      }
}
void Right_View(TreeNode* root)
{
      queue<TreeNode*> q;
      if(root==NULL)
      {
            cout<<"Sorry no Element"<<endl;
            return;
      }
      q.push(root);
      vector<int> ans;
      while(!q.empty())
      {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                  auto temp=q.front();
                  q.pop();
                  if(i==size-1)
                  {
                        cout<<temp->data<<" ";
                  }
                 
                  if(temp->left)
                  {
                        q.push(temp->left);
                  }
                  if(temp->right)
                  {
                        q.push(temp->right);
                  }
                  
            }


      }
}

int height(TreeNode* root)
{
      if(root==NULL)
      {
            return 0;
      }
      int left=height(root->left);
      int right=height(root->right);
      return 1+max(left,right);
}
int diameter(TreeNode* root)
{
      if(root==NULL)
      {
            return 0;
      }
      int left=diameter(root->left);
      int right=diameter(root->right);
      int dia=height(root->left)+height(root->right);
      int ans=max(left,max(right,dia));
      return ans;
}
void Bfs(TreeNode* root)
{



      queue<TreeNode*> q;
      if(root==NULL)
      {
            cout<<"Tree Does not ";
            return;
      }
      q.push(root);
      while(!q.empty())
      {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
            TreeNode* node=q.front();
            q.pop();
            cout<<node->data<<" ";
            if(node->left)
            {
                  q.push(node->left);
            }
            if(node->right)
            {
                  q.push(node->right);
            }
            }


      }


}
TreeNode* Create(TreeNode *&root)
{
      int data;
      cout<<"Enter The data"<<endl;
      cin>> data;
      if(data==-1)
      {
            return NULL;
      }
  root= new TreeNode(data);
      cout<<"Enter The Left Data"<<root->data<<endl;
      root->left=Create(root->left);
      cout<<"Enter The Right Data"<<root->data;
      root->right=Create(root->right);
      return root;
   
}
void inorder(TreeNode *root)
{
      if(root==NULL)
      {
            return;

      }
      inorder(root->left);
      cout<<root->data;
      inorder(root->right);
}
void postorder(TreeNode *root)
{
      if(root==NULL)
      {
            return;

      }
      inorder(root->left);
    
      inorder(root->right);
        cout<<root->data;
}
void preorder(TreeNode *root)
{
      if(root==NULL)
      {
            return;

      }
      cout<<root->data;
      preorder(root->left);
    
      preorder(root->right);
        
}
int lcs(TreeNode*root)
{
      
}
int main()
{
      TreeNode* root=NULL;
        Create(root);
      //   inorder(root);
      // TreeNode* root1=new TreeNode(3);
      //  TreeNode* root2=new TreeNode(4);
      //  root->left=root1;
      //  root->right=root2;
 
     // inorder(root);
     //postorder(root);
    // preorder(root);
//     Bfs(root);
//     cout<<endl;
//     cout<<"The Max diameter is "<<diameter(root);
// Print_Leaf(root);
Right_View(root);

        return 0;



}