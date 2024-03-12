#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Circular_Queue
{
      public:
      int rear;
      int front;
      int arr[100];
      Circular_Queue()
      {
            front=-1;
            rear=-1;
      }
      void push(int val)
      {
            if(front==-1&&rear==-1)
            {
                  front=0;
                  rear=0;
                  arr[front]=val;
            }
            else if(rear==100&&front!=0&&front!=-1)
            {
                  rear=0;
                  arr[rear]=val;

            }
            else if(rear+1==front)
            {
                  cout<<"sorry Queue is full"<<endl;
            }
            else
            {
                  rear++;
                  arr[rear]=val;
            }
      }
      void pop()
      {
            int x;
            if(front==-1)
            {
                  cout<<"Queue is Empty"<<endl;

            }
            else if(front==100)
            {
                  front=0;
            }
            else
            {
                  x=arr[front];
                  front++;

            }
            
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
      Circular_Queue q;
      q.push(12);
      q.push(21);
      q.traversal();
      q.pop();
      cout<<endl;
      q.traversal();


}