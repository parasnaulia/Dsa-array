#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node
{
      public:
      int val;
      node *next;
      node (int val)
      {
            this->val=val;
            next=NULL;
      }
};
void traversal(node *head)
{
      node *pp=head;
      while(pp!=NULL)
      {
            cout<<pp->val<<" ";
            pp=pp->next;
      }

}
node *push(node *head,int value)
{
      node *pp=head;
      node *ans=new node(value);
      
      while(pp->next!=NULL)
      {
            pp=pp->next;
      }
      pp->next=ans;
      return head;
  
}
node* pop(node *&head)
{
      node *pp=head;
      head=head->next;
      delete pp;
      return head;
}


int main()
{
       node *head=new node(23);
      node *head2=new node(24);
       node *head3=new node(25);
      node *head4=new node(26);

      head->next=head2;
      head2->next=head3;
      head3->next=head4;
       traversal(head);
      cout<<"isertion in queue"<<endl;
      push(head,69);
      traversal(head);
      cout<<endl;
      cout<<"pop"<<endl;
      pop(head);
       traversal(head);
      cout<<"Thank You Paras Singing Off"<<endl;
      return 0;


}