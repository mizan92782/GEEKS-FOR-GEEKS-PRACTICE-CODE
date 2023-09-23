//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:



bool ispalindromic(string str)
{
     int s=0;
     int  e=str.size()-1;

     while (s<=e)
     {
        if(str[e]!=str[s])
        {
            return false;

        }

        s++;
        e--;
     }


     return true;
     
}


    string longestPalindrome(string str){
         string  lps="";
     

     for(int i=0;i<str.size();i++)
     {  
        string generateStr="";
        for(int j=i;j<str.size();j++)
        {
            generateStr=generateStr+str[j];

            if(ispalindromic(generateStr) && generateStr.size()>lps.size())
            {
                lps=generateStr;
            }
        }
     }


     return lps; 
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends