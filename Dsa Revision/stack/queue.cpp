#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Queue
{
      public:
      int front;
      int rear;
      int arr[100];
      Queue()
      {
            front=-1;
            rear=-1;
      }
      void push(int val)
      {
            if(front ==rear+1)
            {
                  cout<<"Sorry queue is full"<<endl;
            }
             else if(front==-1&&rear==-1)
            {
                  front=0;
                  rear=0;
                  arr[rear]=val;

            }
            else
            {
            rear++;
            arr[rear]=val;
            }
       
      }
      int  pop()
      {
            int x;
            if(front==-1){
                  cout<<" Sorry Queue is empty"<<endl;

            }
            else
            {
                  x=arr[front];
                  front++;

            }
            return x;
      }
      void traversal()
      {
            for(int i=front;i<=rear;i++)
            {
                  cout<<arr[i]<<" ";
            }
      }
};
int main()
{
      Queue q;
      q.push(12);
      q.push(232);
      q.push(123);
      q.push(2323);
      q.traversal();
      cout<<"After Pop "<<q.pop()<<endl;
      q.traversal();
      cout<<endl;
      cout<<"After Pop "<<q.pop()<<endl;
      q.traversal();
      return 0;

      
      


}