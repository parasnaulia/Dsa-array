#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int j=0;
    int k=0;
    while(i<=5)
    {
       j=1; 

        while(j<=5-i+1)
        {
            cout<<j;
            j++;

        }
        k=i-1;
        while(k--)
        {
            cout<<"*";
            cout<<"*";

        }
        j=1;
        while(j<=5-i+1)
        {
            cout<<5-j+1;
            j++;

        }
        cout<<endl;
        i++;
    }
}