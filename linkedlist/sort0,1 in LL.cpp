class Solution {
  public:
    Node* segregate(Node* head) {
        Node * temp=head;
        
        int c1=0,c2=0,c3=0;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                c1++;
            }
            if(temp->data==1)
            {
                c2++;
            }
            if(temp->data==2)
            {
                c3++;
            }
            temp=temp->next;
        }
       Node * temp1=head;
       
    temp = head;

    while(c1--)
    {
        temp->data = 0;
        temp = temp->next;
    }

    while(c2--)
    {
        temp->data = 1;
        temp = temp->next;
    }

    while(c3--)
    {
        temp->data = 2;
        temp = temp->next;
    }

    return head;
        
        
        
    }
};// 0,1,2 ko sort krna hai linkedlist me by simple method of counting and then replacing the values in the linkedlist.
class Solution {
  public:
    Node* segregate(Node* head) {
       if(head == NULL) return head;

    Node* zeroHead = new Node(-1);
    Node* oneHead  = new Node(-1);
    Node* twoHead  = new Node(-1);

    Node* zeroTail = zeroHead;
    Node* oneTail  = oneHead;
    Node* twoTail  = twoHead;

    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zeroTail->next = temp;
            zeroTail = zeroTail->next;
        }
        else if(temp->data == 1)
        {
            oneTail->next = temp;
            oneTail = oneTail->next;
        }
        else
        {
            twoTail->next = temp;
            twoTail = twoTail->next;
        }

        temp = temp->next;
    }


    zeroTail->next = (oneHead->next != NULL) ? oneHead->next : twoHead->next;
    oneTail->next  = twoHead->next;
    twoTail->next  = NULL;

   
    Node* newhead = zeroHead->next;

    return newhead;
        
        
        
    }
};// 0,1,2 ko sort krna hai linkedlist me by using 3 dummy nodes and then joining them together.