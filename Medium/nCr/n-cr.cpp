//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
      
      int mod=1000000007;
      
      if(r>n) return 0;
      
      
      int arr[n+1][r+1];
      
      
      for(int i=0;i<=n;i++)
      {
          for(int j=0;j<=min(i,r);j++)
          {
              
              
              //case 2
              if(j==0 ||i==j) 
              {
                  arr[i][j]=1;
              }else
              {
                   arr[i][j]=(arr[i-1][j]%mod) + (arr[i-1][j-1]%mod);
              }
          }
      }
      
      
      
      
      return arr[n][r]%mod;
     
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends