//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	
	 
	int kSubstrConcat (int n, string s, int k)
	{
	       
	   if(n%k!=0) return 0;
	   
	   
	   string ans=s.substr(0,k);
	   
       
	   
	   string str;
	   set<string>mset;
	   
	   
	   int i=0;
	   
	   int count=0;
	   
	   
	   while(i<n)
	   {
	         str=s.substr(i,k);
	         i=i+k;
	      
	        if(str!=ans)
	        {
	            count++;
	            
	            mset.insert(str);
	              mset.insert(ans);
	            
	            
	        }
	   }
	   
	   
	   if(count<=1 || ( count==(n/k)-1 && mset.size()==2) ) return 1;
	  
	    
	    return  0;
	   
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends