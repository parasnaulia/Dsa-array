#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int arr[5]={1,2,4,4,2};
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
    }
    cout<<"Answerr "<<ans<<endl;
    return 0;
}
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
         // code here
        if(n==1) {
            return 0;
        }
        
        unordered_map<int, int> mp;
        
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        
        int count = 0;
        
        for(int i=0;i<n;i++) {
            int val= k-arr[i];
            count+= mp[val];
            if(val == arr[i])
                count--;       
        }
//count/2 -> (1,5) == (5,1)
        return count/2;
        
    }
};