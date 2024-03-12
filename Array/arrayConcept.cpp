//Rememeber there is no bound checking in an arrray
//if we want to access element outside the index then we get a garbage value rather than an error
//if we intilaise arr[12]={0}; then all 14(0 to 14 ) index is assign 0
//but arr[19]={1} not in this case. => [1,0,0,0......]
//array alwatys pass as an refrence with a base address
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
int main(){
    int arr[3]={1,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;

}