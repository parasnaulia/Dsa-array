#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.at(3)<<endl;
    v.push_back(2);
   v.pop_back();
   cout<<"capacity"<<v.capacity()<<endl;
   v.clear();
   cout<<" size "<<v.size(); 
    cout<<"capacity"<<v.capacity()<<endl;

}