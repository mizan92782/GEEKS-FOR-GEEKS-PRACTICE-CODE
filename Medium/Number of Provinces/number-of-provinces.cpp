//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void addEdge(vector<vector<int>>& ans,int u,int v)
    {
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    
    void DFS(vector<vector<int>>& ans,vector<bool>& visited,int i)
    {
        visited[i]=true;
        
        for(int x : ans[i])
        {
            if(visited[x]==false)
            {
                DFS(ans,visited,x);
            }
        }
    }
    
    
    int numProvinces(vector<vector<int>> adj, int V) {
        
        vector<vector<int>>ans(V,vector<int>());
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(i!=j && adj[i][j]==1)
                {
                         addEdge(ans,i,j);
                }
            }
        }
        
        
        vector<bool>visited(V,false);
        int com=0;
        
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
                 com++;
                DFS(ans,visited,i);
            }
        }
        
        
        
        
        
        return com;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends