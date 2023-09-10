//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<Node*>one;
        stack<Node*>two;
        
        while(first)
        {
            one.push(first);
            first=first->next;
        }
        
        while(second)
        {
             two.push(second);
            second=second->next;
        }
        
        
        Node* newhead=NULL;
        
        
        
        int x,y;
        int rem=0;
        int sum;
        
        while(!one.empty() || !two.empty())
        {    
              x=0;
              y=0;
              
             if(!one.empty())
             {
                 x=one.top()->data;
                 one.pop();
             }
             
             
             if(!two.empty())
             {
                 y=two.top()->data;
                 two.pop();
             }
             
             
             sum=x+y+rem;
              if(newhead==NULL)
              {
                  newhead= new Node(sum%10);
              }else
              {
                   Node* temp =new Node(sum%10);
                   temp->next=newhead;
                   newhead=temp;
             
              }
             
              rem=sum/10;
              
             
        }
        
        
        if(rem!=0)
        {
             Node* temp= new Node(rem);
             temp->next=newhead;
             newhead=temp;
        }
        
        
        
        return  newhead;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends