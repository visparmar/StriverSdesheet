int findIntersection(Node *firstHead, Node *secondHead)
{
    Node *temp1=firstHead;
        Node *temp2=secondHead;
   int countfirst=0,countsecond=0;
    
    while(temp1!=NULL) 
     {   countfirst++;
    temp1=temp1->next;}
     while(temp2!=NULL) 
      {   countsecond++;
    temp2=temp2->next;}
    int diff=abs(countfirst-countsecond);
    temp1=firstHead;
    temp2=secondHead;
    if(countfirst>countsecond)
    {
        while(diff--)
        {
            temp1=temp1->next;
        }
        
    }
    else
    {
        while(diff--)
        temp2=temp2->next;
    }
    int flag=0;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            flag=1;break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(flag==1) return temp1->data;
    else return -1;
    
    
}