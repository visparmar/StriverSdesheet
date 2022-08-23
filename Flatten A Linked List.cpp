#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* mergedTwoLists(Node* a,Node* b)
{
    Node* temp=new Node(0);
    Node* result=temp;
    while(a!=NULL && b!=NULL){
    if(a->data > b->data)
    {
        temp->child=b;
        b=b->child;
    }
     else
    {
        temp->child=a;
        a=a->child;
    }
        
    temp=temp->child;
    }
    
    if(a) temp->child=a;
    else temp->child=b;
    
    return result->child;
}

Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL) return head;
     head->next=flattenLinkedList(head->next);
    head=mergedTwoLists(head,head->next);
    return head;
    
}
