#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int solve(vector<int> &nums,int size,int i,int j)
{
      if(i==j)
      {
            return 0;
      }
      int mini=INT_MAX;
      for(int k=i;k<j;k++)
      {
            int ans=nums[i-1]*nums[k]*nums[j]+solve(nums,size,i,k)+solve(nums,size,k+1,j);
            mini=min(mini,ans);
      }
      return mini;
      
}
int main()
{
      vector<int> nums={1,2,3};
      cout<<solve(nums,nums.size(),1,nums.size()-1);
      return 0;

}