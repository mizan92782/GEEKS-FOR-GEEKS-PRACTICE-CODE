//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool util(int i, bool *visited,int parent,vector<int>adj[])
  {
      
       
          if(!visited[i])
          {
             
       visited[i]=true;
       
       for(auto it : adj[i])
       {
              if(visited[it]==false)
              {
                    if(util(it,visited,i,adj))
                    {
                        return true;
                    }
              }else if(it !=parent)
                    {
                        return true;
                    }
       }
       
          }
       
       
       return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        bool visited[V];
        memset(visited,false,sizeof(visited));
        
        int parent =-1;
        for(int i=0;i<V;i++)
        {
             if(visited[i]==false)
             {
                  if(util(i,visited,-1,adj))
                  {
                      return true;
                  }
             }
        }
        
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends