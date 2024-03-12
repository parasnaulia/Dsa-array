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
node *stack_push(node *head,int value)
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
void traversal(node *head)
{
      node *pp=head;
      while(pp!=NULL)
      {
            cout<<pp->val<<" ";
            pp=pp->next;
      }

}
node *pop(node *&head)
{
      node *pp=head;
      node* pp1=head->next;
      while(pp1->next!=NULL)
      {
            pp=pp->next;
            pp1=pp1->next;
      }
      pp->next=NULL;
      delete pp1;
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
      cout<<"Insertion i stack"<<endl;
     node *ans=stack_push(head,27);
      traversal(ans);
      cout<<endl;
      cout<<"Pop"<<endl;
      pop(head);
      traversal(ans);
      cout<<endl;
      cout<<"Pop"<<endl;
          pop(head);
      traversal(ans);
      cout<<endl;
      cout<<"push"<<endl;
      stack_push(head,89);
       traversal(ans);
       cout<<endl;
       cout<<"Finally completed"<<endl;
       return 0;


}