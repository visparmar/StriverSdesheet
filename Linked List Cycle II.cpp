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

Node *firstNode(Node *head)
{
	//    Write your code here
    
    Node* fst=head;
    Node* slow=head;
    
    while(fst!=NULL && fst->next!=NULL)
    {
        fst=fst->next->next;
        slow=slow->next;
        
        if(slow==fst) {
            fst=head;
            while(slow!=fst)
            {
                slow=slow->next;
                fst=fst->next;
            }
            return fst;
            
        }
    }
   
    
}