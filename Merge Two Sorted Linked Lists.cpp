Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    
    Node<int>* tempptr;
    Node<int>* temp1=first;
        Node<int>* temp2=second;
    
    if(temp1->data<temp2->data) 
  {      tempptr=temp1;
    temp1=temp1->next;
    }
    else
    {
        tempptr=temp2;
        temp2=temp2->next;
    }
    Node<int>* check=tempptr;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            check->next=temp1;
            temp1=temp1->next;
            
        }
        else
        {
            check->next=temp2;
            temp2=temp2->next;
        }
        
        check=check->next;
        
    }
    
    if(temp1!=NULL)
    {
        check->next=temp1;
    }
    else
    {
        check->next=temp2;
    }
    return tempptr;
    
 
}