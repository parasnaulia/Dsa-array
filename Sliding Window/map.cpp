#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
      vector<int> nums={6,2,1,0,0,0,1,0,0,0};
      unordered_map<int,int> umap;
      for(int i=0;i<nums.size();i++)
      {
            umap[nums[i]]++;
      }
      int count =0;
      for(int i=0;i<nums.size();i++)
      {
            if(nums[i]==0)
            {
                  continue;
            }
            else
            {
                  if(umap[i]==nums[i])
                  {
                        count++;
                  }
                  else
                  {
                        break;
                  }
            }

      }
      cout<<count;
}