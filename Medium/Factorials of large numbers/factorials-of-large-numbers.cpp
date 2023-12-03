//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
   
public:

    vector<int> factorial(int N){
       
       
        vector<int>vec;
        vec.push_back(1);
      
       
       for(int i=2;i<=N;i++)
       {
            multiply(i,vec);
       }
       
       
       reverse(vec.begin(),vec.end());
       return vec;
       
       
    }
    
    
private:

 
int max=100;

void multiply(int x,vector<int>& vec)
{   
    
    // apple : not this is not apple----
    
    int carry=0;
    for(int i=0;i<vec.size();i++)
    {
         int pod=vec[i]*x+carry;
         
         vec[i]=pod%10;
         carry=pod/10;
    }
    
    
    while(carry)
    {
        vec.push_back(carry%10);
        carry=carry/10;
    }
    
    
    
}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends