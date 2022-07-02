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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *temp1=head1;
    Node *temp2=head2;
    Node *add;
    int cnt1=0,cnt2=0,ad=0,rem=0,powww=0;
	//  COUNT THE LENGTH OF LINKED LIST............................
    while(temp1!=NULL)
    {
        cnt1++;
        temp1=temp1->next;
    }
      while(temp2!=NULL)
    {
        cnt2++;
        temp2=temp2->next;
    }
    
	// ................ADDING PROCESS ...................
    if(cnt1>=cnt2)
    {
        add=head1;
        temp2=head2;
        while(add!=NULL && temp2!=NULL)
        {
             ad=add->data+temp2->data+powww;
             rem=ad%10;
            if((ad/10)>0)
            {
                add->data=rem;
                powww=ad/10;
            }
            else
            {
                add->data=rem;
                powww=0;
            }
            add=add->next;
            temp2=temp2->next;
        }
}
   else{
add=head2;
        temp2=head1;
        while(add!=NULL && temp2!=NULL)
        {
            int ad=add->data+temp2->data+powww;
            int rem=ad%10;
            if((ad/10)>0)
            {
                add->data=rem;
                powww=ad/10;
            }
            else
            {
                add->data=rem;
                powww=0;
            }
            add=add->next;
            temp2=temp2->next;
        }
   } 
   //............WHEN ....ONE LINKED LIST IS ENDED.....................
    while(add!=NULL)
    {
        ad=add->data+powww;
        rem=ad%10;
          if((ad/10)>0)
            {
                add->data=rem;
                powww=ad/10;
            }
        else
        {
            add->data=rem;
            powww=0;
        }
        add=add->next;
    }
     
	 // ................remaining carry....or.....last carry......................//
    if(cnt1>=cnt2) 
     {   
        if(powww>0)
        {
            add=head1;
            while(add->next!=NULL)
            {
                add=add->next;
            }
            add->next=head2;
            add=add->next;
            add->data=powww;
            add->next=NULL;
        }
        return head1;
    }
    else
       {
        
        if(powww>0)
        {
            add=head1;
            while(add->next!=NULL)
            {
                add=add->next;
            }
            add->next=head2;
            add=add->next;
            add->data=powww;
            add->next=NULL;
        }
        return head2;
    
    }
    
    // Write your code here.
}