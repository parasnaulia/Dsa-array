#include<iostream>
using namespace std;
void sum(int &x)
{
    x++;
}
int main()
{
   // int arr[5]={9,9};//Static Memory Allocation
    //in stactic mamory allocation we allocate the memory to the stack
    //and and when we take n value as an input is is wrong pratise because memory is allocated on stack and thee will be problem program crash if we assign larger value of n.
    //so we use dynamic memory allocation
    //
    // and we use new operator to assign a memory for an array
    //
    //int* a=new int;
    //here we work with pointers  and we do not work with variable name
   // //for aaray
   // int *ptr=new int[5];
    //
    //Refrence variable 
    int i=0;
   // int& ab=i;//Now this is a refrence variable and a and i point to same variable memory.
sum(i);
    cout<<i;
}