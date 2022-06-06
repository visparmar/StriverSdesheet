Node *findMiddle(Node *head) {
    int count=0;int element;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
 element=count/2;
 temp=head;
    while(element!=0 && temp!=NULL)
    {
        
        temp=temp->next;
        element--;
    }
  return temp;

}
