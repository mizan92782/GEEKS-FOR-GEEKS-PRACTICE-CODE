//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


// } Driver Code Ends
//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
  public:
  
    void  makevector(LNode* head, vector<int>& vec)
   {
       if(head==NULL) return ;
       while(head!=NULL)
       {
           vec.push_back(head->data);
           head=head->next;
       }
   }
   
   
   TNode* makeBST(vector<int>& vec,int l,int r)
   {
       if(l>r)
       {
           return nullptr ;
       }
       
       
       int mid= (l+r)/2;
       if( (l+r)%2==1) mid++;
       
     
       
       TNode* root = new TNode(vec[mid]);
       root->left = makeBST(vec,l,mid-1);
       root->right= makeBST(vec,mid+1,r);
       
     return root;
   }
   
   
 
    
    TNode* sortedListToBST(LNode *head) {
        //code here
        
         vector<int>vec;
       makevector(head,vec);
       
     return makeBST(vec,0,vec.size()-1);
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

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}

// } Driver Code Ends