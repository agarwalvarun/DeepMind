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
void swapIthAndJthElement(head)
{
    Node * currNode=head;
    while(currNode)
}
int main()
{
    Node * head=createList();
    printList(head);
}
