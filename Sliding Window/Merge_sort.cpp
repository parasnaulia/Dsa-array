#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void merge(vector<int>& nums,int low,int mid,int high){
        vector<int>temp;
        int i=low;
        int j=mid+1;
        while(i<=mid &&j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else {
                 temp.push_back(nums[j]);
                 j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
         while(j<=high){
            temp.push_back(nums[j]);
            j++;
        }
     for (int i = low; i <= high; i++) {
        nums[i] = temp[i-low];
      
    }
    }

void ms(vector<int>& nums,int low,int high){
        // base case
       if(low<high){
        int mid=(low+high)/2;
       
        ms(nums,low,mid);
          ms(nums,mid+1,high);
          merge(nums,low,mid,high);
}
    
        }
int main()
{
    vector<int> nums={4,3,2,1,986,456,4856,464,564,564,56,456,456,4,635,34,2,342};
    int x=nums.size()-1;
    ms(nums,0,x);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    
    }

    return 0;

}