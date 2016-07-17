#include<iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
};
Node * createList() {
    Node * head = 0;
    Node * prevNode, *currentNode;
    int value;
    cin >> value;
    while(value != -1) {
        currentNode = new Node;
        currentNode->data = value;
        currentNode->next = 0;
        if (head == NULL) {
            head = currentNode;
        } else {
            prevNode->next = currentNode;
        }
        prevNode = currentNode;
        cin >> value;
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
Node * findKthElement(Node * head,int k)
{
    Node * KthNode=head;
    for(int i=0;i<k-1;i++)
    {
        KthNode=KthNode->next;
    }
   // cout<<KthNode->data<<endl;
    return KthNode;
}
void swapIthAndJthElement(Node * head)
{
    int i,j;
    cin>>i>>j;
    Node * temp,* iprev, * jprev,* inext, *jnext,*ith,*jth;
    iprev=findKthElement(head,i-1);
    jprev=findKthElement(head,j-1);
    inext=findKthElement(head,i+1);
    jnext=findKthElement(head,j+1);
    ith=findKthElement(head,i);
    jth=findKthElement(head,j);
    temp=iprev->next;
    iprev->next=jprev->next;
    jprev->next=temp;
    jth->next=inext;
    ith->next=jnext;
    printList(head);
    return;
}
int main()
{
    Node * head=createList();
    //printList(head);
    swapIthAndJthElement(head);
    return 0;
}
