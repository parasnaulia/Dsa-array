#include<iostream>
#include<bits/stdc++.h>
//I have to find a sum in which my sum is equal to 0 and it should be threesum
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      set<vector<int>> s;
      vector<vector<int>> ans;
      for(int i=0;i<nums.size();i++)
      {
          int init=nums[i];
          int start=i+1;
          int end=nums.size()-1;
          while(start<end)
          {
              if(init+nums[start]+nums[end]==0)
              {
                 s.insert({init,nums[start],nums[end]});
                  start++;
                  end--;

              }
               else  if(init+nums[start]+nums[end]<=0)
              {
                  start++;
              }
              else 
              {
                  end--;
              }
             

              }
          }
      
      for(auto triplets : s)
            ans.push_back(triplets);
        return ans;
      
    }
vector<vector<int>> solve(vector<int> &nums)
{vector<int> v;
    sort(nums.begin(),nums.end());
   vector<vector<int>> ans;
    for(int i=0;i<nums.size();i++)
    {
      
        int start=i+1;
        int end=nums.size()-1;
        int init=nums[i];
        
        while(start<end)
        {
            
         if(init+nums[start]+nums[end]==0)
            {
                v.push_back(init);
                v.push_back(nums[start]);
                v.push_back(nums[end]);
                
                start++;
                end--;
            }
            else if(init+nums[start]+nums[end]<0)
            {
                start++;
            }
            else 
            {
                end--;
            }
            if(v.size())
            {
                ans.push_back(v);
                v.clear();
            }
        }
    }
    return ans;

}
  vector<vector<int>> solve1(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<int> v;
      vector<vector<int>> ans;
      for(int i=0;i<nums.size();i++)
      {
          int init=nums[i];
          int start=i+1;
          int end=nums.size()-1;
          while(start<end)
          {
              if(init+nums[start]+nums[end]==0)
              {
                  v.push_back(init);
                  v.push_back(nums[start]);
                  v.push_back(nums[end]);
                  start++;
                  end--;

              }
                else if(init+nums[start]+nums[end]<0)
              {
                  start++;
              }
              else 
              {
                  end--;
              }
              if(v.size())
              {
                     
              ans.push_back(v);
              v.clear();

              }
          }
      }
      ans.erase(unique(ans.begin(), ans.end()), ans.end());
      return ans;
    }
int main()
{
    vector<int> nums={3,3,4,5,-6,67};
    vector<vector<int>> ans=solve(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}