//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        sort(arr,arr+n);
        
        int count=0;
        int maxV=0;
        
        string x=arr[n-1];
        string result;
        
        
        for(int i=n-1;i>=0;i--)
        {
            
            if(arr[i]==x)
            {
                count++;
            }else
            {
                
                 if(count>=maxV)
                 {
                      maxV=count;
                      result=arr[i+1];
                    
                      
                 }
                 
                 x=arr[i];
                 count=1;
            }
            
            
            
            if(i==0 && count>=maxV)
            {
                maxV=count;
                result=arr[i];
            }
            
            
            
            
        }
        
        
        
        string s="";
        s=s+char(maxV+'0');
        
        return {result,s};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends