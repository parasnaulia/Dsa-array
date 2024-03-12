#include<iostream>
using namespace std;
#include<queue>
int main()
{// maxheap
priority_queue<int> maxi;
maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(4);
while(!maxi.empty())
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}
//min Heap
priority_queue<int,vector<int>,greater<int>> mini;
mini.push(1);
mini.push(2);
mini.push(3);
mini.push(4);
cout<<endl;
while(!mini.empty())
{
    cout<<mini.top()<<" ";
    mini.pop();
}
return 0;
}
