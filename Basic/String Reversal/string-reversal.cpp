//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    int arr[26];
    memset(arr,-1,sizeof(arr));
    
    string str;
    
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ' || arr[s[i]-'A']!=-1)
        {
            continue;
        }
        
        
        str+=s[i];
        arr[s[i]-'A']=0;
    }
    
    
    return str;
    
    
}