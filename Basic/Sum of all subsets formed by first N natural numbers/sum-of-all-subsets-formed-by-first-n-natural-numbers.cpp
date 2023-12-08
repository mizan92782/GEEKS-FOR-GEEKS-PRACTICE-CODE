//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfSubsets(int n)
    {
        
        return n*(n+1)/2 * pow(2,n-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfSubsets(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends