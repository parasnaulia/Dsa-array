#include<iostream>
using namespace std;
#include<map>
//THe map is build with red black tree so when we apply find funtion.the it takes log(n)
//Time But in unodered map it takes O(1) becoz it is implemetd with hashing
//in map order is preserved arrage in particular order
//

int main()
{
    map<int,int> m;
    m[1]=2;
    m[5]=98;
    m[3]=87;
    m[0]=987;
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    if(m.find(144)!=m.end())
    {
        cout<<" Ele  is pre"<<endl;

    }

}