class Solution {
  public:
    Node* delPos(Node* head, int x) {
       Node*temp = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            if(cnt==x) break;
            temp=temp->next;
        }
        Node*front = temp->next;
        Node*back = temp->prev;
        if(front==NULL&&back==NULL){
            delete(temp);
            head = NULL;
        }else if(back==NULL){
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
            delete(temp);
        }else if(front==NULL){
            back->next=NULL;
            temp->prev=NULL;
            delete temp;
        }else{
            back->next = temp->next;
            front->prev=temp->prev;
            temp->next=NULL;
            temp->prev=NULL;
            delete(temp);
        }
        return head;
    }
};