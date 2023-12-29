//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        
        stack<char>sta;
        
        for(int i=0;i<x.size();i++)\
        {
             if(x[i]==')' || x[i]=='}' || x[i]==']')
             {
                  if(sta.size()==0) return false;
                  char c=sta.top();
                  sta.pop();
                  
                  if(x[i]==')' && c!='(') return false;
                    if(x[i]==']' && c!='[') return false;
                 
                   if(x[i]=='}' && c!='{') return false;
                 
                 
                 
                 
             }else
             {
                 sta.push(x[i]);
             }
        }
        
        
        if(sta.size()!=0) return false;
        
        
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends