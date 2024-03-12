#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int ans=0;
      vector<int> nums={2,4,9,7,11,13,25,31,6 ,8,10,24};
      for(int i=0;i<nums.size();i++)
      {
            if(nums[i]%2!=0)
            {
                  ans+=nums[i];

            }

      }
      cout<<ans;

}