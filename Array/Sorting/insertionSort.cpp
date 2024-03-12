// insertion sort is a algo in which we take small array and start working on that array .
//Bset Time complexity of insertion sort is O(n) ans worst case time complexity is O(n^2).
//it is a adoptive sorting algo. which means if it  is already sorted then it will take O(n)  time complexity.
//

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
    int arr[6]={4,3,6,1,2,8};
    //usinfg insertion sort
    for(int i=1;i<6;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
      
        arr[j+1]=key;

    }
    print(arr,6);
    return 0;
}