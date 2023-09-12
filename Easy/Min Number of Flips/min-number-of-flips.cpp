//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    char x='0';
    char y='1';
    int count1=0;
    int count2=0;
    for(int i=0;i<S.size();i++)
    {
        if(x!=S[i])
        {
             count1++;
          
           
        }
        
        if(y!=S[i])
        {
            count2++;
        }
        
         (x=='1') ? x='0' : x='1';
         (y=='1') ? y='0' : y='1';
        
    }
    
    
    return min(count1,count2);
}