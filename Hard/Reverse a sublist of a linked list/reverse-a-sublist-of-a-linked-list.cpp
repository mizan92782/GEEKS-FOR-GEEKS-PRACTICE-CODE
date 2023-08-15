//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


// } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
   Node* reverseBetween(Node* head, int m, int n)
    {
        Node* first=head;
        Node* second=head;

        int x=1;

        while (x<m)
        {
           first=first->next;
           x++;
        }


        x=1;
        while (x<n)
        {
           second=second->next;
           x++;
        }


        list<Node*>list;
        
        
        while (first!=second->next)
        {
        
            list.push_back(first);
            first=first->next;
        }


        while (!list.empty())
        {
              Node* x=list.front();
                list.pop_front();
              Node* y=NULL;
              
              if(!list.empty()) 
              {
                Node* y=list.back();
                 list.pop_back();

                 swap(x->data,y->data);
                
              }
     
              
        }
        
        


        
        

        
    return head;
    }

};


//{ Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}

// } Driver Code Ends