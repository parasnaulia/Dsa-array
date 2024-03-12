#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Stack
{
      public: 
      int top;
      int arr[100];
      Stack()
      {
            top=-1;
      }
      void push(int val)
      {
            top++;
            arr[top]=val;

      }
      int pop()
      {
            int ans=arr[top];
            top--;
            return ans;
      }
      void traversal()
      {
            for(int i=0;i<=top;i++)
            {
                  cout<<arr[i]<<" ";
            }

      }


};
int main()
{
      Stack st;
      st.push(20);
      st.push(21);
      st.push(32);
      st.push(45);
      st.traversal();
      cout<<endl;
      cout<<"pop Element"<<st.pop()<<endl;
      cout<<"pop Element"<<st.pop()<<endl;
      st.traversal();
      return 0;
      

}