//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    // function to find totient of n
    long long ETF(long long n){
       
    long long  result=n;

      int p=2;  
       while(n>1){

         if(n%p==0)
         {  

              //https://chat.openai.com/share/86a95d00-70e3-4e4c-ac71-f6b8ea3877f7
              //! see  for : condition
              result = result * (p - 1) / p;
              while(n%p==0)
              {
                 n=n/p;
              }

             
         }
         p++;

    }
    
     return result;
     
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        cout << ob.ETF(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends