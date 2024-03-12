#include<iostream>
using namespace std;
#include<bits/stdc++.h>

     int partition (int arr[], int s, int e)
    {
          int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;
       
    }
    void quickSort(int arr[], int low, int high)
    {
        
         if( low >= high)
            return ;
        
        
        int p = partition(arr,low , high);
        
        // left part sorting
        quickSort(arr, low, p-1);
        
        //right part sorting
        quickSort(arr, p+1, high);
    }
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
}
int main()
{
    int arr[6]={1,5,3,42,1,4};
    quickSort( arr, 0, 5);
    print( arr,6);
    return 0;


}