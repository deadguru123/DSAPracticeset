int addhelper(Node *temp)
{
    if(temp==NULL)
    {
        return 1;
    }
    int carry=addhelper(temp->next);
    temp->data+=carry;
    if(temp->data<10)
    return 0;
    return 1;
}
class Solution {
  public:
    Node* addOne(Node* head) {
        int carry=addhelper(head);
        if(carry==1)
        {
            Node * newnode=new Node(1);
            newnode->next=head;
            head=newnode;
        }
        return head;
    }
};