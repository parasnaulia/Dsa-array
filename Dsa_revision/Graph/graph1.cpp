#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void Creation(unordered_map<int, vector<int>> &umap, int u, int v, int wt)
{
      umap[u].push_back(v);
      umap[u].push_back(wt);
}
int main()
{
      unordered_map<int, vector<int>> umap;
      Creation(umap, 1, 2,4);
      Creation(umap,3,4,5);
      Creation(umap,4,5,7);
      
}