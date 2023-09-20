//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string str)
	{
	    vector<int>last(256,-1);
     int n=str.size();


     long long int dp[n+1];
    
     // ! for empty string;
     dp[0]=1;
     int mod = 1000000007;
     
     for (int i=1;i<=n;i++)
     {
          dp[i]=(2*dp[i-1])%mod;
         
          // as ith disting char subsequenat multiple of previoue index

          if(last[str[i-1]]!=-1)
          {
            dp[i]=dp[i]-dp[last[str[i-1]]]+mod;
            dp[i]=dp[i]%mod;
           
          }
        

          //consider as if find
          last[str[i-1]]=(i-1);

          //** significant: we store (i-1) index ,suppost for
           //* abcb  ,for a,we   stor d[o],
           /*
              * for b ,we store a dp ,de[1];
               
           */
          //(i-1) storing index at last[] as a find charter 
     }


     return dp[n];

	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends