#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    int count=0;
    while(i<5)
    {
        count++;
        j=0;
        while(j<count)
        {
            cout<<count;
            j++;
        }
        cout<<endl;
        i++;
    }
}