#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int j=0;
    int count=0;
    int k=-1;
    while(i<=5)
    {
        count++;
        j=0;
        k=i;
        while(j<count)
        {
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
    }
}