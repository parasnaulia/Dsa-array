#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Stack
{
private:
      int top;
      vector<int> ans;

public:
      Stack()
      {
            top = -1;
      }
      void push(int value)
      {
            ans.push_back(value);
            top = ans.size() - 1;
      }
      void traversal()
      {
            for (int i = 0; i < ans.size(); i++)
            {
                  cout << ans[i] << " ";
            }
      }
      int pop()
      {
            int x=ans[top];
           ans.pop_back();
           return x;

      }
};

int main()
{
      Stack st;
      st.push(10);
      st.push(20);
      st.push(30);
      st.push(40);
      st.traversal();
      cout<<endl;
      int ans=st.pop();
      cout<<"Poped Ele is "<<ans<<endl;
      st.pop();
       st.traversal();


      return 0;
}