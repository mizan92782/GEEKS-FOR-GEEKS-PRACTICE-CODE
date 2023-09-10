//{ Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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

Node* subLinkedList(Node* l1, Node* l2);

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
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends


/* Structure of linked list Node

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

//You are required to complete this method




Node* reverseList(Node* head)
{
     if(head==NULL) return NULL;
      
   
       Node* temp=NULL;
     while (head!=NULL)
     {
        
         Node* x= head;
         head=head->next;

        
         x->next=temp;
         temp=x;

        
     }

   return temp;
     
}


int len(Node* head)
{
    if(head==NULL) return 0;
    
    return 1 + len(head->next);
}





Node* subLinkedList(Node* l1, Node* l2)
{
     while(l1->data==0 && l1->next!=NULL)
    {
        l1=l1->next;
    }
    
    
      while(l2->data==0 && l2->next!=NULL)
    {
        l2=l2->next;
    }
    
     
     int one=l1->data;
     int two=l2->data;
     
     
    l1=reverseList(l1);
    l2=reverseList(l2);
    
    
    
    
    Node* l11=NULL;
    Node* l22=NULL;
    
    if(len(l1)<len(l2))
    {
        
             Node* xx=l1;
         
         l1=l2;
         l2=xx;
         
    }else if(len(l1)==len(l2))
    {
        if(one<two)
        {
             Node* xx=l1;
         
         l1=l2;
         l2=xx;
        }
    }
    
   
    
    
   
    
    long int borrow=0;
    long int x,y;
    long int sub;
    

    
    Node* head=NULL;
    
    while(l1 || l2)
    {
        x=0;
        y=0;
        
        
        if(l1)
        {
            x=l1->data;
            l1=l1->next;
        }
        
        
         if(l2)
        {
            y=l2->data;
            l2=l2->next;
        }
        
        
          if(borrow==1)
        {
            x--;
            borrow=0;
        }
        
        
        if(x<y)
        {
            x=x+10;
            borrow=1;
           
        }
        
      
        
      
        
           sub=x-y;
           
          
            
        
            if(head==NULL)
            {
                head =new Node(sub);
            }else
            {
                 Node* temp= new Node(sub);
                 temp->next=head;
                 head=temp;
            }
        
        
       
        
    }
    
    
    while(head->data==0 && head->next!=NULL)
    {
        head=head->next;
    }
    
    
   
     
    
    return head;
}