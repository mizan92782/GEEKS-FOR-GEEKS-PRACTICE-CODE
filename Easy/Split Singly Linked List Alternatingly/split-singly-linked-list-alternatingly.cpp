//{ Driver Code Starts

#include <iostream>
#include <stdio.h>
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

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
} 

void alternatingSplitList(struct Node*); 

struct Node* a;
struct Node* b;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        a=b=NULL;
        struct Node* head = NULL;
        
        
        int n, k;
        cin>>n;
        
        while(n--)
        {
            cin>>k;
            append(&head, k);
        }
        
        alternatingSplitList(head);
        printList(a);
        printList(b);
    }
    return 0;
}




// } Driver Code Ends


/*
structure of node is as
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


/*
These are global variables to store heads of split lists
struct Node* a; //store head of first list
struct Node* b; //store head of second list

*/




void alternatingSplitList(struct Node* head) 
{
    Node* ay=NULL;
     Node* by=NULL;
    
   
    
   
   
    int i=0;
    while(head!=NULL)
    {
         if(i%2==0)
         {
               Node* x=head;
               head=head->next;
               x->next=NULL;
               
              if(a==NULL)
              {
                  a=x;
                  ay=x;
              }else
              {
                   ay->next=x;
                   ay=ay->next;
              }
              
              
         }else
         {
             
              Node* x=head;
              head=head->next;
              x->next=NULL;
              
              if(b==NULL)
              {
                  b=x;
                  by=x;
              }else
              {
                   by->next=x;
                   by=by->next;
              }
             
             
         }
         
         i++;
    }
    
    
}

