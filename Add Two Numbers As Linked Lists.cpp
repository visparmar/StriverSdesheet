//............................LEETCODE.......................//

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
             
       ListNode* dummy=new ListNode();
       ListNode* ans=dummy;
       ListNode* temp=dummy;
       
       int carry=0;

       while(l1!=NULL || l2!=NULL)   {
     int sum=0;
         if(l1!=NULL){
             sum+=l1->val;
             l1=l1->next;

         }

         if(l2!=NULL){
             sum+=l2->val;
             l2=l2->next;
         }
       
       int fnl=sum+carry;
       carry=0;
       cout<<fnl<<" ";
ListNode* newNode=new ListNode(); 
       if(fnl>=10){
             
             newNode->val=fnl%10;
             carry=fnl/10;

       }else{
           
              newNode->val=fnl;
       }
              temp->next=newNode;
              temp=temp->next;

       }   

if(carry==1){
    ListNode* newNode=new ListNode();
     newNode->val=carry; 
     temp->next=newNode;

}


       return ans->next; 
        
    }
};

//................................END.......................


//.............CodeStudio....................
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
