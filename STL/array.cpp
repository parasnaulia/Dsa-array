#include<iostream>
//array is same as static array.it is not dynamic so we do not array in our competative programing.
//becayse in that we need dynamic array that is vector

#include<array>
using namespace std;
int main()
{
    array<int,4> a={1,2,4,3};
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<" Array at "<<a.at(2)<<endl;
    cout<<" Array first "<<a.front()<<endl;
     cout<<" Array last "<<a.back();
}