#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node * next;
    node * back;
    public:
    node(int data1,node *next1,node *back1)
    {
        data=data1;
        next=next1;
        back=back1;
        
    }
    public:
    node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node * dll(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        temp->back = mover;
        mover = temp;
    }
    return head;
    
}
void print(node* head)
{
    node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node * insany(node * head,int val,int data)
{
    node * temp=head;
    int ct=0;
    while(temp!=NULL)
    {
        ct++;
        if(val==1)
        {
            node *newhead= new node(data,head,nullptr);
            head->back=newhead;
            head=newhead;
        
        }
         if(ct==val) break;
        temp=temp->next;
    }
    node * prev=temp->back;
    node * newnode = new node(data,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
int main()
{
   vector<int>arr={6,7,8,9,3};
   node*head=dll(arr);
  head=insany(head,3,5);
   print(head);
    return 0;
}