lass Solution {
  public:
    int getMiddle(Node* head) {
        Node * temp=head;
        int c=0,s=0;
        while(temp)
        {
            temp=temp->next;
            c++;
        }
        temp=head;
         for(int i=0;i<c;i++)
        {
            if(i==ceil(c/2))
            return temp->data;
            temp=temp->next;
            
        }
        
    }
};