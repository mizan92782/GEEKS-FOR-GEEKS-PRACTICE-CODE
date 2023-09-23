//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
   map<char,int>mymap;
   for(int i=0;i<S.size();i++)
   {
       mymap[S[i]]++;
   }
   
   
   int x=0;
   
   for(auto it:mymap)
   {
        if(it.second%2==1)
        {
            x++;
        }
   }
   
   
   return (x<=1);
}

