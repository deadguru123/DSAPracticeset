lass Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        Node * temp1=head1;
        Node* temp2=head2;
        Node *dummy=new Node(-1);
        Node * curr= dummy;
        int carry=0,sum=0;
        while(temp1!=NULL||temp2!=NULL)
        {
            sum=carry;
            if(temp1)
            {
                sum=sum+temp1->data;
            }
            if(temp2)
            {
                sum=sum+temp2->data;
            }
            Node* newnode= new Node(sum%10);
            carry=sum/10;
            curr->next=newnode;
            curr=curr->next;
            if(temp1)
            {
                temp1=temp1->next;
                
            }
            if(temp2) 
            {
                temp2=temp2->next;
                
            }
           
        }
         if(carry)
            {
                Node *newnode=new Node(carry);
                curr->next=newnode;
            }
       return dummy->next;
        
    }
};