#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void merge(vector<int> &nums, int i, int j, int mid)
{
      int x = i;
      int y = mid + 1;
      vector<int> temp;
      while (x <= mid && y <= j)
      {
            if (nums[x] <= nums[y])
            {
                  temp.push_back(nums[x]);
                  x++;
            }
            else 
            {
                  temp.push_back(nums[y]);
                  y++;
            }
      }
      while (x <= mid)
      {
            temp.push_back(nums[x]);
            x++;
      }
      while (y <= j)
      {
            temp.push_back(nums[y]);
            y++;
      }
for(int k=i;k<=j;k++)
{
      nums[k]=temp[k-i];

}


}
void ms(vector<int> &nums, int i, int j)
{
      if (i > j)
      {
            return;
      }
      if (i <= j)
      {
           int mid=i+(j-i)/2;
            ms(nums, i, mid);
            ms(nums, mid + 1, j);
            merge(nums, i, j, mid);
      }
}
int main()
{
      vector<int> nums = {1, 3, 2, 4};
      ms(nums, 0, nums.size() - 1);
cout<<"After Sorting"<<endl;
for(int i=0;i<nums.size();i++)
{
cout<<nums[i]<<" ";
}
return 0;
}