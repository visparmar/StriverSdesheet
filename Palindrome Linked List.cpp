#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/



bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *slwptr=head;
        LinkedListNode<int> *fstptr=head;
   
    if(head==NULL || head->next==NULL) return true;
    
    while(fstptr->next!=NULL  && fstptr->next->next!=NULL)
    {
        slwptr=slwptr->next;
        fstptr=fstptr->next->next;
    }
 
      LinkedListNode<int> *pre=NULL;
        LinkedListNode<int> *curr=slwptr->next;
        LinkedListNode<int> *nxt;
    
    while( curr!=NULL)
    {
        nxt=curr->next;
        curr->next=pre;
        
        pre=curr;
        curr=nxt;
   }
    
    slwptr->next=pre;
    slwptr=slwptr->next;
    
      
    
    while(slwptr!=NULL)
    {
        if(slwptr->data!=head->data)
       { 
            return false;
        }slwptr=slwptr->next;
       head=head->next;
        
    }
    return true;
  
}