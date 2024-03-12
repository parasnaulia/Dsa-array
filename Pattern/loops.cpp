#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    while(i<5)
    {
        j=1;
        while(j<5)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}