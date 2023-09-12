//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	


string Binary_representation_loop(int n)
{
      // using whileloop
      string str="";
      while (n)
      {
           str=char((n%2)+48)+str;
           n=n>>1;
      }
      
return str;
}
	
	char kthCharacter(int m, int n, int k)
	{
	     string str=Binary_representation_loop(m);
	     
	     if(str=="") str="0";
	     
	     while(n--)
	     {
	          string one="";
	          for(int i=0;i<str.size();i++)
	          {
	               if(str[i]=='0')
	               {
	                   one=one+"01";
	               }else
	               {
	                   one=one+"10";
	               }
	          }
	          
	          str=one;
	     }
	     
	   
	     
	     
	     return str[k-1];
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
   		int m, n, k;
   		cin >> m >> n >> k;

   	
        Solution ob;
   		cout << ob.kthCharacter(m, n, k) << "\n";
   	}

    return 0;
}
// } Driver Code Ends