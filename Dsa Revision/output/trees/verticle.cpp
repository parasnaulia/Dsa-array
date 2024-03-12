#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node 
{
      public:
      int data;
      Node* left;
      Node*right;
      Node( int data)
      {
            this->data=data;
            left=NULL;
            right=NULL;
      }
};

void Preorder_Traversal(Node *root)
{
      if (root == NULL)
      {
            return;
      }
      cout << root->data << " ";
      Preorder_Traversal(root->left);
      Preorder_Traversal(root->right);
}
vector<int> Verticle(Node *root)
{
      unordered_map<int,vector<int>> umap;
      vector<int> ans;
      queue<pair<Node*,int>> q;
      if(root==NULL)
      {
            return ans;
      }
      q.push(make_pair(root,0));
      while(!q.empty())
      {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                  pair<Node*,int> x=q.front();
                  auto temp=x.first;
                  int index=x.second;
                  q.pop();
                  if(temp->left)
                  {
                        q.push(make_pair(temp->left,index-1));
                  }
                  if(temp->right)
                  {
                        q.push(make_pair(temp->right,index+1));
                  }
                  umap[index].push_back(temp->data);
                  
            }
      }
      for(auto x:umap)
      {
            ans.push_back(x.first);
      }
      vector<int> ans1;
      sort(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++)
      {
            auto x=umap[ans[i]];
            for(auto y:x)
            {
                  ans1.push_back(y);
                  
            }
            
      }
      return ans1;
      

}
int main()
{
      Node *root=new Node(9);
        Node *root1=new Node(10);
          Node *root2=new Node(11);
      root->left=root1;
      root->right=root2;
      // Preorder_Traversal(root);
       vector<int> ans=Verticle(root);
       for(int i=0;i<ans.size();i++)
       {
            cout<<ans[i]<<" ";
       }
       return 0;
      
}