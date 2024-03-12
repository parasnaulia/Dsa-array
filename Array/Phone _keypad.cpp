#include<iostream>
using namespace std;
#include<bits/stdc++.h>
 void solve(string digits,int index,string s[], vector<string> &ans,string output)
      {
          if(index>=digits.length())
          {
            ans.push_back(output);
            return;
          }
          int value=digits[index]-'0';
          string d=s[value];
          for(int i=0;i<d.length();i++)
          {
              output.push_back(d[i]);
              solve(digits,index+1,s,ans,output);
              output.pop_back();
          }

      }
    
    vector<string> letterCombinations(string digits) {
      vector<string> ans;
      if(digits.length()==0)
      {
        return ans;
      }
      string s[10]={
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    int index=0;
    string output="";
    solve(digits,index,s,ans,output);
    return ans;





    }

int main()
{
    
    
}
