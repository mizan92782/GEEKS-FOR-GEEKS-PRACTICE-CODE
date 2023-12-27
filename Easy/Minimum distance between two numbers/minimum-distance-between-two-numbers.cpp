//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        
       int mini=INT_MAX;
       
       int a=INT_MAX;
       int b=INT_MAX;
       
       for(int i=0;i<n;i++)
       {
            if(arr[i]==x)
            {
                 
                 a=i;
                
                 mini=min(mini, abs(a-b));
                 

            }
            
            if(arr[i]==y)
            
            {
                b=i;
               
                mini=min(mini,abs(a-b));
            }
       }
       
       
       if(a==INT_MAX || b==INT_MAX) return -1;
       
       
       
       return mini;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends