// set is implemented from bst 
// And in set elements are unique.
//in set elements are fetched in particular order ascending
#include<iostream>
using namespace std;
#include<set>
int main()
{
    set<int,int> s1;
    set<int> s;
    s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(2);
   for(auto x:s)
   {
    cout<<x<<" ";
   }
   set<int>::iterator itr=s.find(2);
   cout<<endl;
   cout<<*itr;

}