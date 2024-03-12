#include <iostream>>
using namespace std;
#include <bits/stdc++.h>
void bfs(unordered_map<int, vector<int>> umap, int node, vector<int> &visited)
{
      queue<int> q;
      q.push(node);
      visited[node] = 1;
      while (!q.empty())
      {
            int node1 = q.front();
            q.pop();
            cout << node1;
            for (auto x : umap[node1])
            {
                  if (!visited[x])
                  {
                        visited[x] = 1;
                        q.push(x);
                  }
            }
      }
}
int main()
{
      unordered_map<int, vector<int>> umap;
      vector<int> visited(5, 0);
      umap[0].push_back(1);
      umap[0].push_back(3);
      umap[1].push_back(4);
      umap[1].push_back(3);
      umap[3].push_back(4);
      bfs(umap, 0, visited);
      return 0;
}