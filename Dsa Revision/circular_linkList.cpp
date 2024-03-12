#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node
{
      public:
      int val;
      node *next;
      node(int val)
      {
            this->val=val;
            next=nullptr;
      }


};
void traversal(node *head)
{
      node *pp=head;
      do 
      {
            cout<<pp->val<<" ";
            pp=pp->next;

      }while(pp!=head);
      // best use of Do While

}
bool detect_Cycle(node *head)
{
      node *pp=head;

      unordered_map<node*,int> umap;
      while(pp!=NULL)
      {
            if(umap[pp]==true)
            {
                  return true;
            }
            umap[pp]=true;
            pp=pp->next;

      }
      return false;


}
node* DeleAtFirst(node *head) {
    if (head == nullptr) {
        return nullptr; // Handle the case of an empty list
    }

    node *pp = head;
    while (pp->next != head) {
        pp = pp->next;
    }

    node *pp1 = head;
    pp->next = head->next;
    head = head->next;
    delete pp1;

    return head;
}
node* DeleAtLast(node *head)
{
      node *pp=head;
      node *pp1=head->next;
      while(pp1->next!=head)
      {
            pp=pp->next;
            pp1=pp1->next;
      }
      pp->next=head;
      delete pp1;
      return head;


}
int main()
{
      node *head1=new node(10);
      node *head2=new node(12);
      node *head3=new node(10);
      node *head4=new node(12);
      head1->next=head2;
      head2->next=head3;
      head3->next=head4;
     head4->next=head1;

      // traversal(head1);
      // if(detect_Cycle(head1))
      // {
      //       cout<<"cycle is Present"<<endl;
      // }
      // else
      // {
      //       cout<<"No Cycles id present"<<endl;
      // }
     node *ans= DeleAtLast(head1);
     traversal(ans);


      return 0;
  

}