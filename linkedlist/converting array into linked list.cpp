#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node * next;
    public:
    node(int data1,node *next1)
    {
        data=data1;
        next=next1;
        
    }
    public:
    node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
node * ll(vector<int>&arr){
    node * head=new node(arr[0]);
    node * mover=head;
    for(int i=1;i<arr.size();i++){
        node * temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
        
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

int main()
{
   vector<int>arr={6,7,8,9,3};
   node*head=ll(arr);
   print(head);
    return 0;
}