//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    
    vector<long long> nextLargerElement(vector<long long> nums, int n){
        
        
  

    vector<long long> greater(n, -1);
    // if no greater element it will be -1;

    stack<long long> st;
    // stack for operation

    for (int i = 0; i < nums.size(); i++)
    {
        while (!st.empty() && nums[st.top()] < nums[i])
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
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends