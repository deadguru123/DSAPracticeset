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
// recrusive method
class Solution {
  public:
    Node* reverseList(Node* head) {
        if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node * newnode=reverseList(head->next);
    Node * front=head->next;
    front->next=head;
    head->next=NULL;
    return newnode;

    }  
};