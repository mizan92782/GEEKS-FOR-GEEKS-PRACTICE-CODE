//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
     
      struct metting{
          int start;
          int end;
     };
     
     static bool compr(metting x, metting y)
     {
         return x.end<y.end;
     }
     
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        metting met[N];
        
        for(int i=0;i<N;i++)
        {
             met[i].start=S[i];
             met[i].end=F[i];
        }
        
        
        sort(met,met+N,compr);
        
        
       vector<int>vec;
       
       
        
        map<int,int>myset;
        myset.insert({met[0].start,met[0].end});
        
        int ending=met[0].end;
        
        for(int i=1;i<N;i++)
        {
            if(met[i].start>ending)
            {
               
               myset[met[i].start]=met[i].end;
                ending=met[i].end;
            }
        }
        
        
        
        
        int x=-1;
        for(int i=0;i<N;i++)
        {
             if(myset[S[i]] && myset[S[i]]==F[i] && myset[S[i]]!=x)
             {
                 vec.push_back(i+1);
                 x=myset[S[i]];
             }
        }
        
        
        
        
        
        return vec;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends