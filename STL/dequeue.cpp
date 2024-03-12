#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(0);
    for(auto x:d)
    {
        cout<<x<<" ";
    }
    d.pop_back();
    d.pop_front();
    cout<<endl;
    cout<<d.at(0);
    d.erase(d.begin(),d.end());
    cout<<d.size();



}