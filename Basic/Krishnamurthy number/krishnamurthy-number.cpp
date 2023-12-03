//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int factorial(int N)
   {
       if(N==0 || N==1) return 1;
       
       return N* factorial(N-1);
   }
   
   
    string isKrishnamurthy(int N) {
       
       
       int n=N;
       
       int sum=0;
        
        while(n)
        {
             sum=sum+factorial(n%10);
             n=n/10;
        }
        
        
        if(N==sum) return "YES";
        
       return "NO";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends