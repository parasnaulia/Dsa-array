//In bubble sort we use the concept of bubble in which the heaviest element should lie on the last.
//and nor we compare n-i-1 rounds. so total we have (n-1) rounds becoz last ele is already sorted.
//and time complexity in best case is O(n) in already sorted case and in wordt case in its is O(n^2)
////It is inplace  becoz it does not req extra space.
#include<iostream>


using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int flag=0;
    int arr[6]={4,3,2,5,6,9};
    //Applying bubble sort
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        if(flag==0)
        {
            break;
        }
    }
    print(arr,6);
    return 0;
}