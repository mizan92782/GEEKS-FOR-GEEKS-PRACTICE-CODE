//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
     struct Stock{
         
         int price;
         int amount;
   };
   
   
   
   static  bool comp(Stock x, Stock y)
   {
        if(x.price==y.price)
        {
            return x.amount> y.amount;
        }
        
        return x.price<y.price;
   }
   
   
   
public:

  
   
    int buyMaximumProducts(int n, int k, int price[]){
       
       Stock stc[n];
       
       for(int i=0;i<n;i++)
       {
           stc[i].price=price[i];
           stc[i].amount=i+1;
       }
       
       
       
       //sort
       sort(stc,stc+n,comp);
       
       int count=0;
       
       for(int i=0;i<n;i++)
       {
           if( stc[i].amount * stc[i].price <=k)
           {
               k= k-(stc[i].amount * stc[i].price) ;
               
               count=count+stc[i].amount;
             
               
           }else if (( stc[i].amount * stc[i].price) >k)
           {
                int x=k/stc[i].price;
                
                 count=count+x;
                 break;
                 
           }
       }
       
       
       return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends