//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int minDistance(int V,vector<int>dist,vector<bool>spt)
    {
     int mini=INT_MAX;
     int index=0;

     for(int i=0;i<V;i++)
     {
          if(spt[i]==false &&  dist[i]<mini)
          {
            mini=dist[i];
            index=i;
          }
     }


         return index;
    }
    
    
    
    
    
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
    vector<int> dist(V, INT_MAX);
    vector<bool> spt(V, false);
    dist[S] = 0;

    for (int i = 0; i < V - 1; i++) {
        int u = minDistance(V, dist, spt);
        spt[u] = true;

        for (int v = 0; v < adj[u].size(); v++) {
            if (!spt[adj[u][v][0]] && dist[u] != INT_MAX && dist[u] + adj[u][v][1] < dist[adj[u][v][0]]) {
                dist[adj[u][v][0]] = dist[u] + adj[u][v][1];
            }
        }
    }

    return dist;
}


    
    
    
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends