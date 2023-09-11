//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
   void splitingList(Node** a,Node** b,Node* head)
{
    Node*  slow=head;
    Node* fast=head;
    Node* prev=slow;

    while(fast && fast->next)
    {
        // for case : 1->2 
        // we need to store prev node
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
      
        
    }

    // second half head;
    *b=slow;
    //first half head;
    *a=head;
    
    // making last node of first half null;
    prev->next=NULL;

    

    


}



Node* sortList(Node* a,Node* b)
{
     Node* head=NULL;

     if(a==NULL)
     {
        return b;
     }else if(b==NULL)
     {
        return a;
     }

     if(a->data<= b->data)
     {
        head=a;
        head->next=sortList(a->next,b);
     }else{
        head=b;
        head->next=sortList(a,b->next);
     }


    return head;

}





Node*  mergeSort(Node* headref)
{
      if(headref==NULL || headref->next==NULL)
      {
        return headref;
      }


      // for spliting list in two half;
      Node* a;
      Node* b;



     // ! splilint list in a, b two half
      splitingList(&a,&b,headref);

    // ! again and again splilitlist until size 1
   a=mergeSort(a);
   b=mergeSort(b);




    // ! Now add and sorf list;
    // ! in every mergeSort() funtion sorting ther current list 
    // storing head of soritn ling in head ref
       headref=sortList(a,b);
    

 return headref;

}

};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends