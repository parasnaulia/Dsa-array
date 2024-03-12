#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void solve(int index,vector<int> &nums, vector<int> &path, vector<vector<int>> &ans, int sum, int k)
{
      if (index >= nums.size())
      {
            if (sum == k)
            {
                  ans.push_back(path);
            }
            return;
      }
      if(nums[index]<=k)
      {

            //TAke wala case
      path.push_back(nums[index]);
      solve(index,nums,path,ans,sum,k-nums[index]);
      path.pop_back();
      }
      
      solve(index+1,nums,path,ans,sum,k);
}
int main()
{
      vector<int> nums = {1, 2, 3};
      vector<int> path;
      vector<vector<int>> ans;
      int sum = 0;
      int k = 4;
      solve(0,nums, path, ans, sum, k);
      for(int i=0;i<ans.size();i++)
      {
            for(int j=0;j<ans[i].size();j++)
            {
                  cout<<ans[i][j]<<" ";

            }
            cout<<endl;
      }
      return 0;
}