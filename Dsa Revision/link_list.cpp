#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node
{
      public:
      int val;
      node* next;
      node(int value)
      {
            val=value;
            next=nullptr;
      }

};
void traversal(node *head)
{
      node*pp=head;
      while(pp!=NULL)
      {
            cout<<pp->val<<" ";
            pp=pp->next;

      }
}
node* insertionAtFront(node *&head,int value)
{
     // node* pp=head;
      node* pop=new node(value);
      pop->next=head;
      //pop=head;
      return pop;
      
      
}
node* inserAtLast(node *&head,int value)
{
       node *pop=new node(value);
      if(head==NULL)
      {
            
            return pop;
      }
      node *pp=head;
      while(pp->next!=NULL)
      {
            pp=pp->next;
      }
     
      pp->next=pop;
      return head;
}
node*insertInBetween(node *&head,int value,int target)
{
      node*pop=head;
      if(head->val==target)
      {
           return insertionAtFront(head,value);


      }
      

      while(pop!=NULL&&pop->val==target)
      {
            pop=pop->next;
            
      }
      // if(pop->next==NULL)
      // {
      //       return inserAtLast(head,value);
      // }
      node *no=pop->next;
      //now i have Two pointer target and next to it
      node *ans=new node(value);
      pop->next=ans;
      ans->next=no;
      return head;
  

}
node *DeleteAtFirst(node* head)
{
      if(head==NULL)
      {
            return NULL;
      }
      node *pp=head->next;
     
      delete head;
      return pp;


}
node*DeleteAtLast(node *&head)
{
      if(head==NULL)
      {
            return NULL;
      }
      node *pp=head;
      node*pp1=head->next;
      while(pp1->next!=NULL)
      {
            pp=pp->next;
            pp1=pp1->next;


      }
      pp->next=NULL;
      delete pp1;
      return head;


}
node *DeleInBetween(node *&head,int target)
{
      if(head==NULL)
      {
            return NULL;
      }
      if(head->val==target)
      {
            DeleteAtFirst(head);

      }
      node *pp=head;
      node *pp1=head->next;
      while(pp1->val==target&&pp1==NULL)
      {
            pp=pp->next;
            pp1=pp1->next;

      }
      if(pp1==NULL)
      {
            return NULL;
      }
      pp->next=pp1->next;
      delete pp1;
      return head;
      

}
node *reverse(node *head)
{
      if(head==NULL)
      {
            return NULL;
      }
      node *cur=head;
      node *next1=head->next;
      node *prev=NULL;
      while(cur!=NULL)
      {
          next1=cur->next;
            cur->next=prev;
            prev=cur;
              cur=next1;
 
      }
      return prev;
}
node* reverse1(node* &head) {
    if (head == nullptr) {
        return nullptr; // Handle an empty list
    }

    node *cur = head;
    node *prev = nullptr;
    node *next1 = head->next; // Initialize next1 here

    while (cur != nullptr) {
        next1 = cur->next; // Store the next node
        cur->next = prev; // Reverse the current node's next pointer
        prev = cur; // Move prev to the current node
        cur = next1; // Move cur to the next node
    }

    // Update the head to point to the new first node (which was the last node before reversing)
    head = prev;

    return head;
}

int  main()
{
      node *head=new node(23);
      node *head2=new node(24);
       node *head3=new node(25);
      node *head4=new node(26);

      head->next=head2;
      head2->next=head3;
      head3->next=head4;
    // traversal(head);
     
      // node *oo=insertionAtFront(head,45);
      // traversal(head);
      // node *head=NULL;
      //   node *oo1=inserAtLast(head,45);
//      node* pp=insertInBetween(head,34,24);
//      traversal(pp);
//  node* ans=DeleteAtLast(head);
// traversal(ans);
node *ans1=reverse(head);
traversal(ans1);


return 0;






      


        

    


      


      


}
