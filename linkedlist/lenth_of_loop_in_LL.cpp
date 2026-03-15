class Solution {
  public:
    int lengthOfLoop(Node *head) {
        map<Node*,int> mpp;
      Node * temp=head;
int pos = 0;

while(temp)
{
    if(mpp.find(temp) != mpp.end())
        return pos - mpp[temp];

    mpp[temp] = pos;
    pos++;
    temp = temp->next;
}
    }
};
// without using hashing
int findlength(Node * slow,Node*fast)
{
    int c=1;
    Node *fa=fast->next;
    while(slow!=fa)
    {
        c++;
        fa=fa->next;
    }
    return c;
}
class Solution {
  public:

    int lengthOfLoop(Node *head) {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    return findlength(slow,fast);
    }
    return 0;
    }
};