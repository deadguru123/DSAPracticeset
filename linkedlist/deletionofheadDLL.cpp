Node *deleteHead(Node *head) {
    Node * back=head;
    head=head->next;
    back->next=NULL;
    head->prev=NULL;
    return head;
}