//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
    
    void getCofactor(vector<vector<int>>& matrix,vector<vector<int>>& submat,int  p,int q,int n)
    {
         int i=0,j=0;
         
         for(int row=0;row<n;row++)
         {
              for(int clm=0;clm<n;clm++)
              {
                  if(row!=p && clm!=q)
                  {
                    submat[i][j]=matrix[row][clm];
                 
                    j++;
                    
                    
                     if(j==n-1){
                      j=0;
                      i++;
                  }
                  
                  
                  
                  
                  }
                  
                  
                 
              }
         }
    }
    
    
    
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        
        
        int ans=0;
        
        vector<vector<int>>submatrix(n,vector<int>(n));
        
        if(n==1)
        {
            return matrix[0][0];
        }
        
        
        int sign=1;
        
       for(int i=0;i<n;i++)
       {
            getCofactor(matrix,submatrix,0,i,n);
            
            ans=ans+sign*matrix[0][i]*determinantOfMatrix(submatrix,n-1);
            
            sign=-sign;
       }
       
       
       
       
       return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends