class Solution {
  public:
    Node* reverseList(Node* head) {
        Node * temp=head;
        Node * front=temp->next;
        Node * prev=NULL;
        while(temp!=NULL)
        {
            Node * front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
      return prev;
    }
};