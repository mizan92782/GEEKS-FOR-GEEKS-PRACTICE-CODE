//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int LargButMinFreq(int arr[], int n) {
        // code here
        int max = INT_MIN;
        int min = INT_MAX;
        unordered_map<int,int> mp;
        
        for(int i = 0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto x : mp){
            if(min>x.second){
                min = x.second;
                max = x.first;
            }
            else if(min == x.second){
                if(max < x.first){
                    max = x.first;
                    min = x.second;
                }
            }
        }
        return max;
    }
};
    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends