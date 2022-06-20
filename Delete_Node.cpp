void deleteNode(LinkedListNode<int> * node) {
    swap(node->data,node->next->data);
    node->next=node->next->next;

}
