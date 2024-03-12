#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void solve(vector<int> &nums,vector<int> &path,vector<vector<int>> &ans,int index,int sum)

{
if(index>=nums.size())
{
      ans.push_back(nums);
      return;
}
for(int i=index;i<nums.size();i++)
{
      swap(nums[i],nums[index]);
      solve(nums,path,ans,index+1,sum);
}



}
int main()
{
      vector<int> nums={1,2,3};
      vector<int> path;
      vector<vector<int>> ans;
      int index=0;
      int sum=0;
      solve(nums,path,ans,index,sum);
      for(int i=0;i<ans.size();i++)
      {
            for(int j=0;j<ans[i].size();j++)
            {
                  cout<<ans[i][j]<<" ";
            }
            cout<<endl;
      }
}