#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void rev(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int arr[5]={1,2,4,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    rev(arr,size);
    print(arr,size);
    return 0;
}