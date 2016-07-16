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
Node *find_Kth_element(Node* head,int k)
{
    while (k && head)
    {
        head=head->next;
        k--;
    }
    return head;
}
void insert_at_Kth(Node *head,int k)
{
    if (k==0)
    {

    }
    else
    {
        Node *prev_to_K=find_Kth_element(head, k-1);
        Node *temp=new Node;
        int x;
        cout<< "enter the value to be inserted";
        cin>> x;
        temp->data=x;
        temp->next=prev_to_K->next;
        prev_to_K->next=temp;
    }
}
void print_List(Node *head) {
    while(head) {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main() {
    Node * head = createList();
    int k;
    cout<< "enter the position to be entered";
    cin>> k;
    insert_at_Kth(head,k);
    print_List(head);
    return 0;
}

