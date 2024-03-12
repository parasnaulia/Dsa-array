#include<iostream> 
using namespace std;
#include<bits/stdc++.h>
void printarray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
  
    int a[5]={4,3,5,1,8};
    
     printarray(a,5);
     cout<<endl;
    
    //In selection sort we just do put the minimum element at correct postion at round 1.
    //and at round 2 we put that element in in second rightmost place.
    for(int i=0;i<4;i++)
    {
       
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
               
            }
                

            
        }

   
    }
    printarray(a,5);
    return 0;

}
//Time Complexity is O(n^2)
//we take worst time as Big o becoz it tells upper bond.which is wrost case .
//and big Q gives average case and big w gives best case . 
//We use selection sort when we have small input constraints.
//Best and worst case both have same complexity.
//It is inplace  becoz it does not req extra space.