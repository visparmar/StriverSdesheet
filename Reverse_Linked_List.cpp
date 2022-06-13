// iterative Method............................

*****************************************************************/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=next;
    }
    return prev;
}


// Recursive Method...........................
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL) return head;
    LinkedListNode<int> *newhead=reverseLinkedList(head->next) ;
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
