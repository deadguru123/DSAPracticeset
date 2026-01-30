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
node *insatanywhere(node* head,int val,int k)
{
    node*temp=head;
  
    int c=0;
  if(k==1)
  {
      node*temp=new node (val,head);
      return temp;
  }
  while(temp){
      c++;
      if(c==k-1)
      {
         node* curr = new node(val, temp->next);
            temp->next = curr;
            break;
        
         
      }
      temp=temp->next;
  }
  return head;
}

int main()
{
   vector<int>arr={6,7,8,9,3};
   node*head=ll(arr);
   head=insatanywhere(head,55,6);
   print(head);
    return 0;
}