#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
      unordered_map<int,int> umap;
      vector<int> nums={1,3,5,4,7};
      vector<int> dp(nums.size(),1);
      vector<int> back(nums.size());
      for(int i=0;i<nums.size();i++)
      {
            back[i]=i;
      }
      for(int i=1;i<nums.size();i++)
      {
            for(int prev=i-1;prev>=0;prev--)
            {
                  if(nums[i]>nums[prev])
                  {
                        if(1+dp[prev]>dp[i])
                        {
                              dp[i]=1+dp[prev];
                              back[i]=prev;
                              umap[dp[i]]++;

                        }
                        else if(1+dp[prev]==dp[i])
                        {
                              umap[dp[i]]++;
                        }


                  }
            }
      }
      int ans=INT_MIN;
      int index=-1;
      for(int i=0;i<dp.size();i++)
      {
            if(ans<dp[i])
            {
                  ans=dp[i];
                  index=i;

            }
            
      }
      int maxi=INT_MIN;
    for(auto x:umap)
    {
      maxi=max(maxi,x.first);
    
    }
    int pp=0;
   for(auto x:umap)
   {
      if(x.first==maxi)
      {
            pp+=x.second;

      }
   }
   cout<<pp<<" "<<endl;
     // cout<<"The Number of Longest Incresing subsequence with Greatest Subse is"<<count<<endl;
      // cout<<index<<" "<<endl;
      // cout<<ans<<" ";
      // Now Printing The THe LIS
      // vector<int> ans1;
      // ans1.push_back(nums[index]);

//cout<<ans;
      // while(ans>1)
      // {
      //       ans1.push_back(nums[back[index]]);
      //       index=back[index];
            
      //       ans--;
      // }
      // cout<<endl;
      // reverse(ans1.begin(),ans1.end());
      // for(int i=0;i<ans1.size();i++)
      // {
      //       cout<<ans1[i]<<" ";
      // }
      // cout<<endl;
      
      
      cout<<endl;
      return 0;



   
}





// [1,2,3,4,5]?