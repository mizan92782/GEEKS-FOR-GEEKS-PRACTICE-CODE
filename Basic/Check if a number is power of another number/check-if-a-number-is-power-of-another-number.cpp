//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long x, long long y){
       
       if (x == 1)
        return (y == 1);
 
    // Repeatedly compute power of x
    long long pow = 1;
    while (pow < y)
        pow *= x;
 
    // Check if power of x becomes y
    return (pow == y);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends