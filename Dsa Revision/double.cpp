#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class node
{
public:
      int val;
      node *prev;
      node *next;
      node(int val)
      {
            this->val = val;
            prev = NULL;
            next = NULL;
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
node *insertAtFirst(node *&head,int data)
{
      node *pp=head;
      node *ans=new node(data);
      if(head==NULL)
      {
            return ans;
      }
      ans->next=pp;
      pp->prev=ans;
      ans->prev=NULL;
      head=ans;
      return head;

}
node *insertAtLast(node *head,int data)
{
      node *pp=head;
      node * ans=new node(data);
      if(head==NULL)
      {
            return ans;
      }
      while(pp->next!=NULL)
      {
            pp=pp->next;
      }
      ans->prev=pp;
      pp->next=ans;
      ans->next=NULL;
      return head;

}
node *insertInnBetween(node *head,int data,int target)
{
      node *pp=head;
      node *pp1=head->next;
      node *ans=new node(data);
      if(head==NULL)
      {
            return ans;
      }

      while(pp1->val!=target)
      {
            pp=pp->next;
            pp1=pp1->next;
      }
      pp->next=ans;
      ans->prev=pp;
      ans->next=pp1;
      pp1->prev=ans;
      return head;

}
node *deleteAtFirst(node* head)
{
      node *pp=head;
      if(head==NULL)
      {
            return NULL;
      }
      
      head=head->next;
      delete pp;
      return head;
}
node *deleteInBetween(node *head,int target)
{
      if(head==NULL)
      {
            return NULL;
      }
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
      node *head1 = new node(21);
      node *head2 = new node(22);
      node *head3 = new node(23);
      node *head4 = new node(24);
      head1->prev=NULL;
      head1->next=head2;
      head2->prev=head1;
      head2->next=head3;
      head3->prev=head2;
      head3->next=head4;
      head4->prev=head3;
      head4->next=NULL;
      //  node*head1=NULL;
      node* ans=deleteInBetween(head1,22);
      traversal(ans);
      

      return 0;
}