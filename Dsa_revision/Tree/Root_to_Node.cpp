#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Node
{
      public:
      int data;
      Node*left;
      Node*right;
      Node(int data)
      {
            this->data=data;
            left=NULL;
            right=NULL;
      }

};
bool Root_To_Leaf(Node* root,vector<int> &ans,int ele)
{
      if(root==NULL)
      {
            return false;
      }
      ans.push_back(root->data);
      if(root->data==ele)
      {
            return true;
      }
      bool left=Root_To_Leaf(root->left,ans,ele);
      bool right=Root_To_Leaf(root->right,ans,ele);
      if(left||right)
      {
            return true;
      }
      ans.pop_back();
      return false;

}
int main()
{
      Node*root= new Node(23);
      Node*root1=new Node(21);
       Node*root2= new Node(26);
      Node*root3=new Node(29);
      Node*root4=new Node(69);
      Node*root5=new Node(99);
      root->left=root1;
      root->right=root2;
      root2->left=root3;
        root3->right=root4;
        root2->right=root5;

      vector<int> ans;
      Root_To_Leaf(root,ans,99);
      cout<<"Path from sourcr to node is: "<<endl;
      for(int i=0;i<ans.size();i++)
      {
            cout<<ans[i]<<" ";
      }
      return 0;




}


