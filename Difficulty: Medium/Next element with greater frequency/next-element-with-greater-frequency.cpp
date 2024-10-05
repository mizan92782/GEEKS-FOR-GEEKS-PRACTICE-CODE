//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int nums[],int n)
    {
        
      
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          mp[nums[i]]++;
      }
      
      
        
    vector<int> greater(n, -1);
    // if no greater element it will be -1;

    stack<int> st;
    // stack for operation

    for (int i = 0; i <n; i++)
    {
        while (!st.empty() && mp[nums[st.top()]] < mp[nums[i]])
        {
            // stack top less than nums[i]
            // nums[i] is next grate of top();
            greater[st.top()] = nums[i];
            st.pop();
        }

        // push value
        st.push(i);
    }
    
    

    return greater;
    
    
    
    
    
    
    }
};


//{ Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}

// } Driver Code Ends