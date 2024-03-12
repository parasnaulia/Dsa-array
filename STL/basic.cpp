#include<istream> 
#include<bits/stdc++.h>
using namespace std;
//stack<int> st;

int main()

{
     // vector<int> Friend={23,45,11,77,18};
     vector<int> Friend={19, 12, 3, 4, 17};
      int K=2;
      int N=5;
      stack<int> st;
       reverse(Friend.begin(),Friend.end());
    
    for(int i=0;i<N;i++)
    {
        st.push(Friend[i]);
    }

    int count=1;
    while(st.size()>1&&count!=K)
    {
    
        
        int x1=st.top();
        st.pop();
        int x2=st.top();
        st.pop();
        if(x1>x2)
        {
            st.push(x1);
        }
        else  if(x2<x1)
        {
            st.push(x2);
            
        }
        
        
            count++;
        
    }
    while(!st.empty())
    {
      cout<<st.top()<<" ";
      st.pop();
    }
}

