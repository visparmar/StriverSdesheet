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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(K==0) return head;
    LinkedListNode<int> *head1=head;
    int count=0;
    while(head1!=NULL)
    {
        count++;
        head1=head1->next;
    }
    head1=head;
    int run=count-K;
    //cout<<run<<count;
    if (run==0) return head->next;
    else
        run--;
 {   while(run--)
    {
        head1=head1->next;
    }
 
    head1->next=head1->next->next;
    return head;
    
    }
 
}