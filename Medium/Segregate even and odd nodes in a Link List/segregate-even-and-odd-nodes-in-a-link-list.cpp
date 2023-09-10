//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
       
       Node* even =new Node(2);
       Node* e=even;
       Node* odd= new Node(1);
       Node* o=odd;
       
       while(head)
       {
           
           
           
           if(head->data%2==0)
           {
               Node* x=head;
               head=head->next;
               
               x->next=NULL;
               even->next=x;
               even=even->next;
           }
           
           
           if(head==NULL) break;
           
            if(head->data%2==1)
           {
               Node* x=head;
               head=head->next;
               
               x->next=NULL;
               odd->next=x;
               odd=odd->next;
           }
           
           
           
           
       }
       
       
       even->next=o->next;
       
       return e->next;
       
    }   
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends