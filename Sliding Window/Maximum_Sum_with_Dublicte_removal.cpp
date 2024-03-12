// We should not include dublicate Elements.
//  in this question we are using two pointer approach. which is sliding window.
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<map>
  long long maximumSubarraySum(int nums[], int k,int size) {
        //In this question we have to Apply the liding Eindow concept
        //Because wE ARE GIVEN A WINDOW OF SIZE k AND AN ARRAY SOS WE CAN 
        //APPLY tHYE SLIDING WINDOW AND IN THIS WE HAVE TO FIND MAXIMUM AND 
        //maXIMUM VALU SO THAT WE CAN APPLY THE SLIDING WINDOW
       long long i=0;
        long long j=0;
        long long sum=0;
        long long maxi=0;
       
      
        unordered_map<int,int> umap;
        while(j<size)
        {
            sum+=nums[j];
            umap[nums[j]]++;
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(umap.size()==k)
                {
                    maxi=max(sum,maxi);
                   
                }
                if(umap.find(nums[i])!=umap.end())
                {
                    umap[nums[i]]--;
                }
                if(umap[nums[i]]==0){umap.erase(nums[i]);}
                sum=sum-nums[i];
                i++;
                j++;
            }
               
               
               
    }
    return maxi;
}
int main()
{
    int Arr[6]={2,3,20,5,19,19};
int size=6;
int Window_Size=2;
int ans=maximumSubarraySum(Arr,Window_Size,size);
cout<<"The Maximum Sum is: "<<ans<<endl;
    

    return 0;
}