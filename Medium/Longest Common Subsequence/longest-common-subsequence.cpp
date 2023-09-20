//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        int dp[1001][1001];
        
        //Following steps build dp[x+1][y+1] in bottom up fashion. Note that 
        //dp[i][j] contains length of LCS of s1[0..i-1] and s2[0..j-1].
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                //if i or j is 0, we mark dp[i][j] as 0.
                if(i==0||j==0)
                dp[i][j]=0;     
                
                //else if the current char in both strings are equal, we add 1 
                //to the output we got without including these both characters.
                else if (s1[i-1] == s2[j-1])        
                dp[i][j] = dp[i-1][j-1] + 1; 
                
                //else s1[i-1]!=s2[j-1] so we check the max output which 
                //comes from s1 or s2 without considering current character.
                else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
        
        //returning the result.
        return dp[n][m];  
         
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends