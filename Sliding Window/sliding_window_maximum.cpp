#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> Maxi(int Arr[],int k,int n)
{
list<int> l;
int i=0;
int j=0;
vector<int> ans;
while(j<n)
{
    while(l.size()>0&&Arr[j]>l.back())
    {
        l.pop_back();
    }
    l.push_back(Arr[j]);
    if(j-i+1<k)
    {
        j++;
    }
    else if(j-i+1==k)
    {
        ans.push_back(l.front());
        //Now checking For scope 
         if(Arr[i]==l.front())
        {//scope is over pop it
        l.pop_back();
        }
        i++;
        j++;
}
}
return ans;
}


int main()

{
int Arr[8]={1,3,-9,-3,5,3,0,7};
int size=8;
int Window_Size=3;
vector<int> ans=Maxi(Arr,Window_Size,size);
//The Required ans is
cout<<"The Required ans is:"<<endl;
for(int i=0;i<6;i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}
