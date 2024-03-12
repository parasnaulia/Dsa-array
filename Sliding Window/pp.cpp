#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
      vector<int> nums={7,9,5,2,8,7};
      bool flag=0;
      int count=0;
      for(int i=0;i<nums.size();i++)
      {
            flag=0;
            for(int j=i+1;j<nums.size();j++)
            {
                  if(nums[i]<nums[j])
                  {
                        flag=1;
                        break;
                  }
            }
            if(flag==0)
            {
                  count++;
            }
      }
      cout<<count;
}