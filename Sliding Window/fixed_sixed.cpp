#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxiSum(int Arr[],int k,int n)
{
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    int j=0;
    while(j<n)
    {
        sum+=Arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            maxi=max(sum,maxi);
            sum-=Arr[i];
            i++;
            j++;
            

        }
      
    }
    return maxi;
}
int main()
{
int Arr[6]={2,3,20,5,6,1};
int size=6;
int Window_Size=2;
int ans=MaxiSum(Arr,Window_Size,size);
cout<<"The Maximum Sum is: "<<ans<<endl;
return 0;

} 