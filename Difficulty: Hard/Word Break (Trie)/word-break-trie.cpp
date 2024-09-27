//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    
    struct Node{
        bool endpoint;
        Node* next[26];
        
        Node() {
            endpoint = false;
            for(int i = 0; i < 26; i++) {
                next[i] = NULL;
            }
        }
    };
    
    
    
    void insert(Node* root, string str) {
        
        
        int len = str.size();
        
        for(int i = 0; i < len; i++) {
            int id = str[i] - 'a';
            
            if(root->next[id] == NULL) {
                root->next[id] = new Node();
            }
            
            root = root->next[id];
        }
        
        
        root->endpoint =true; 
    }
    
    
    
    bool Search(Node* root, string str) {
        
        
        int len = str.size();
         
        for(int i = 0; i < len; i++) {
           
            int id = str[i] - 'a';
            
            if(root->next[id] == NULL) {
                return false;
            }
            
            
            root = root->next[id];
        }
        
        
        return root->endpoint;  
    }
    
    
    
    bool answer(Node* root,string A)
    {
         
         int n=A.size();
         if(n==0) return true;
         
         for(int i=1;i<=n;i++)
         {
              
              if(  Search(root,A.substr(0,i))  && answer(root,A.substr(i,n-1))  )
              {
                  return true;
              }
         }
         
         
         return false;
    }
    
    
    int wordBreak(string A, vector<string> &B) {
        
        
        Node* root = new Node();
        
      
        for(int i = 0; i < B.size(); i++) {
            insert(root, B[i]);
        }
       
       
       
        
        return  answer(root,A);
        
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends