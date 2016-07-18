#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;
};
Node * createList()
{
   Node * head=0,* currNode,* prevNode;
   int val;
   cin>>val;
   while(val!=-1)
   {
       currNode = new Node;
       currNode->data=val;
       if(head==0)
       {
           head=currNode;
       }
       else
       {
           prevNode->next=currNode;
       }
       currNode->next=0;
       prevNode=currNode;
       cin>>val;
   }
   return head;
}
void printList(Node * head)
{
    Node * currNode=head;
    while(currNode!=0)
    {
        cout<<currNode->data<<"     ";
        currNode=currNode->next;
    }
    return;
}
int main()
{
    Node * head=createList();
    printList(head);
    return 0;
}
