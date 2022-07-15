#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     Node* temp=head;int cnt=1;
    while(temp->next!=NULL)
    {
        cnt++;temp=temp->next;
    }

    temp->next=head;
    int rem=k%cnt;
    rem=cnt-rem;
    temp=head;
   Node * pre;rem--;
    while(rem--)
    {
        
        temp=temp->next;
    }
     pre=temp->next;
    temp->next=NULL;
    
    
    
    return pre;
    
    
    
}