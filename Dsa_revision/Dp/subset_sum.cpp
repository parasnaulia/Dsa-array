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
      path.push_back(nums[index]);
      solve(index+1,nums,path,ans,sum+nums[index],k);
      path.pop_back();
      solve(index+1,nums,path,ans,sum,k);
}
int main()
{
      vector<int> nums = {1, 2, 3,4};
      vector<int> path;
      vector<vector<int>> ans;
      int sum = 0;
      int k = 6;
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