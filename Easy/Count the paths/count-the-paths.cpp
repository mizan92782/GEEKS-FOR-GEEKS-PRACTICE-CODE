//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void addEdge(vector<vector<int>>& graph,int u,int v)
    {
         graph[u].push_back(v);
    }
    
    
    void dfs(vector<vector<int>>& graph,int s,int d,int& m)
    {
        
         
       if (s == d) {
            m++;
            return;
        }
        
        for (int i : graph[s]) {
            dfs(graph, i, d, m);
        }
    }
    
    
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    
	    vector<vector<int>>graph(n,vector<int>());
	    for(int i=0;i<edges.size();i++)
	    {
	        addEdge(graph,edges[i][0],edges[i][1]);
	    }
	    
	 
	    int m=0;
	    
	    dfs(graph,s,d,m);
	    
	    return m;
	
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends