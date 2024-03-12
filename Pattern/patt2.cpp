#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int j=0;
    int count=0;
    while(i<=5)
    {
        count++;
        j=0;
        while(j<count)
        {
            cout<<i+j;
            j++;
        }
        cout<<endl;
        i++;
    }
}