//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kthPrime(int n, int k){
        
        int fact=2;
        
        while(n>1)
        {
             if(n%fact==0)
             {
                 n=n/fact;
                 k--;
             }else
             {
                 fact++;
             }
             
             if(!k)
             {
                 break;
             }
        }
        
        
        
        return (k==0) ? fact : -1;
        
        
        
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends