#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main()

{
    int arr[8]={5,2,9,4,7,6,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    swapAlternate(arr,size);
    print(arr,size);
    return 0;


}