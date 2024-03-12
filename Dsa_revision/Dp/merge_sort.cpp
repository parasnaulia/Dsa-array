#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void merge(vector<int> &nums,int i,int j,int mid)
{
      int k=j-i+1;
      int z=0;
      int b[k];
      int x=i;
      int y=mid+1;
      while(x<=mid&&y<=j)
      {
            if(nums[x]<=nums[y])
            {
                  b[z]=nums[x];
                  x++;
                  k++;
            }
            else if(nums[x]>nums[y])
            {
                  b[z]=nums[y];
                  y++;
                  z++;

            }
      }
      while(x<=mid)
      {
            b[z]=nums[x];
            z++;
            x++;
      }
      while(y<=j)
      {
            b[z]=nums[y];
            y++;
            z++;
      }
      for(int v=i;v<=j;v++)
      {
            nums[i]=b[i-v];
      }


}
void merge_sort(vector<int> &nums,int i,int j)
{
      if(i>j) {
      return;
      }
      if(i<=j)
      {
            int mid=(i+j)/2;
            merge_sort(nums,i,mid);
            merge_sort(nums,mid+1,j);
            merge(nums,i,j,mid);
      }
}
int main()
{
      vector<int> nums={1,3,2,4};
      merge_sort(nums,0,nums.size());
      for(int i=0;i<nums.size();i++)
      {
            cout<<nums[i]<<" ";
      }


}

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Time complexity is O(nlogn)
//And it is a stable sort Because order is maintained inmerge sort
//Not inplace because requires expra space
//we can improve the quick sort by checking the the condition during mergin if(arr[mid]>arr[mid+1] because the two arraya is alrady sorted then 
//we get a complexity of O(N)) when my array is already sorted.


 void merge(int arr[], int l, int mid, int r)
    {
        int left=l;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid&&right<=r)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
                
            }
            else 
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=r)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i-l];
        }
    }
void mergeSort(int arr[], int l, int r)
    {
      if(l>r) return;
    //   int mid=l+(r-l)/2;
      if(l<r)
      {
         int mid=l+(r-l)/2;
          mergeSort(arr,l,mid);
          mergeSort(arr,mid+1,r);
          if(arr[mid]>arr[mid+1])//Optimised merge sort. in a case of sorted array.
          {
           merge(arr,l,mid,r);
          }
      }

     
    }
    void print(int arr[], int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;


    }
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
   mergeSort(arr,0,6);
   print(arr,7);
   return 0;
}
