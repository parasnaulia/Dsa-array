#include <bits/stdc++.h>
#include <iostream>
using namespace std;
stack<int> st;
void creation(unordered_map<int, vector<int>> &umap, int u, int v)
{
      umap[u].push_back(v);
      //  umap[v].push_back(u);
}
void dfs(unordered_map<int, vector<int>> &umap, vector<int> &ans, vector<bool> &visited, int node)
{
      visited[node] = true;
      ans.push_back(node);
      for (auto x : umap[node])
      {
            if (!visited[x])
            {
                  dfs(umap, ans, visited, x);
            }
      }
}
void topo(unordered_map<int, vector<int>> &umap, vector<int> &ans, vector<bool> &visited, int node)
{
      visited[node] = true;
      // ans.push_back(node);
      for (auto x : umap[node])
      {
            if (!visited[x])
            {
                  topo(umap, ans, visited, x);
            }
      }
      st.push(node);
      return;
}
void dfs1(unordered_map<int, vector<int>> &umap, vector<int> &vis, int node)
{
      vis[node] = 1;
      for (auto x : umap[node])
      {
            if (!vis[x])
            {
                  dfs1(umap, vis, x);
            }
      }
      st.push(node);
      return;
}
void bfs(unordered_map<int, vector<int>> &umap, int node, vector<int> &ans, vector<bool> &visited)
{
      queue<int> q;
      if (umap.size() == 0)
      {
            cout << " Sorry There is no Node Present: " << endl;
            return;
      }
      q.push(node);
      visited[node] = true;
      while (!q.empty())
      {
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for (auto z : umap[x])
            {
                  if (!visited[z])
                  {
                        visited[z] = true;
                        q.push(z);
                  }
            }
      }
}
vector<int> khans(unordered_map<int, vector<int>> &umap, int size)
{
      vector<int> indeg(size + 1, 0);
      for (int i = 1; i < indeg.size(); i++)
      {
            for (auto x : umap[i])
            {
                  indeg[x]++;
            }
      }
      // Now Checking for indeg 0
      // We have to print that first
      queue<int> q;
      for (int i = 1; i < indeg.size(); i++)
      {
            if (indeg[i] == 0)
            {
                  q.push(i);
            }
      }
      vector<int> ans;
      while (!q.empty())
      {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto x : umap[node])
            {
                  indeg[x]--;
                  if (indeg[x] == 0)
                  {
                        q.push(x);
                  }
            }
      }
      return ans;
}
bool dfs11(unordered_map<int, vector<int>> &umap, vector<bool> &vis, int node)
{
      vis[node] = true;
      for (auto x : umap[node])
      {
            if (!vis[x])
            {
                  if (dfs11(umap, vis, x))
                  {
                        return true;
                  }
            }
            else if (vis[x] == true)
            {
                  return true;
            }
      }
      return false; // Missing this line to handle the case when the loop completes without finding a cycle
}
bool hasCycle(unordered_map<int, vector<int>> &umap, int nodes)
{
      vector<bool> vis(nodes + 1, false);
      for (int i = 1; i <= nodes; ++i)
      {
            if (!vis[i])
            {
                  if (dfs11(umap, vis, i))
                  {
                        return true; // Graph has a cycle
                  }
            }
      }
      return false; // Graph is acyclic
}

bool is_cycle(unordered_map<int, vector<int>> &umap, vector<bool> &vis, int node, int par)
{
      vis[node] = true;
      for (auto x : umap[node])
      {
            if (!vis[x])
            {
                  if (is_cycle(umap, vis, x, node) == true)
                  {
                        return true;
                  }
            }
            else if (par != x)
            {
                  return true;
            }
      }
      return false;
}
bool is_cycle1(unordered_map<int, vector<int>> &umap, vector<bool> &vis, int node, vector<bool> &path_vis)
{
      vis[node] = true;
      path_vis[node] = true;
      for (auto x : umap[node])
      {
            if (!vis[x])
            {
                  if (is_cycle1(umap, vis, x, path_vis))
                  {
                        return true;
                  }
            }
            else if (path_vis[x] == true)
            {
                  return true;
            }
      }
      path_vis[node] = false;
      return false;
}
int main()
{

      unordered_map<int, vector<int>> umap;
      creation(umap, 1, 2);
      creation(umap, 2, 3);
      creation(umap, 3, 1);
      // creation(umap, 1, 4);
      // creation(umap, 4, 5);
      //   creation(umap, 3, 1);
      // vector<int> ans;
      vector<bool> visited(6, false);
      //   topo(umap,ans,visited,1);

      // dfs1(umap,visited,1);
      // cout<<"Dfs Traversal is:"<<endl;
      //   for(int i=0;i<ans.size();i++)
      //   {
      //       cout<<ans[i]<<" ";
      //   }
      // while(!st.empty())
      // {
      //       cout<<st.top()<<" ";
      //       st.pop();
      // }
      // cout << "Ans of Khans alogo is" << endl;
      // vector<int> ans = khans(umap, 6);
      // for (int i = 0; i < ans.size(); i++)
      // {
      //       cout << ans[i] << " ";
      // }
      vector<bool> cur(6, false);
      bool ans = is_cycle1(umap, visited, 1, cur);
      if (ans == 1)
      {
            cout << "Cycle is present" << endl;
      }
      else
      {
            cout << "Cycle is not Present" << endl;
      }

      return 0;
}