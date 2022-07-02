#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head)
{
	Node *fst=head;
    Node *slw=head;
    
    while(fst!=NULL && fst->next!=NULL)
    {
           slw=slw->next;
        fst=fst->next->next;
        if(fst==slw) return true;
        
     
    }
   
    return false;
}