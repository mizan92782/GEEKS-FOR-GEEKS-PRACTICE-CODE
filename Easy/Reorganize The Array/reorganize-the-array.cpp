//{ Driver Code Starts
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


int * Rearrange(int *arr,int n){
   
   int dp[100000];
   memset(dp,-1,sizeof(dp));
   
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=-1)
       {
           dp[arr[i]]=arr[i];
       }
   }
   
   
   for(int i=0;i<n;i++)
   {
       arr[i]=dp[i];
   }
   
   
   return arr;
   
  
}
