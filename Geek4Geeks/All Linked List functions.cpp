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

Node * insertAtKthPosition(Node * head,int val,int k)
{
    //int val,k;
    //cout<<"Enter data";
    //cin>>val;
    //cout<<"Enter Position";
    //cin>>k;
    Node * kprev,* kth, * newNode;
    newNode= new Node;
    newNode->data=val;

    if(k==1)
    {
        newNode->next=head;
        head=newNode;

    }
    else
    {
        kprev=findKthElement(head, k-1);
        kth=kprev->next;
        if (kth->next==0)
        {
            kth->next=newNode;
            newNode->next=0;
        }
        else
        {
            kprev->next=newNode;
            newNode->next=kth;
        }
    }

    //printList(head);
    return head;
}
void midPoint(Node * head)
{
    Node * i=head, * j=head, *mid;
    while(1)
    {
        if(j->next==0 || j->next->next==0)
        {
            mid=i;
            break;
        }
        i=i->next;
        j=j->next->next;
    }
    cout<<mid->data;
    return;
}
Node * ReverseList(Node * head)
{
    Node * newhead=0;
    while(head!=0)
    {
        newhead=insertAtKthPosition(newhead,head->data,1);
        head=head->next;
    }
    printList(newhead);
    return newhead;
}
void ReversePrintList(Node * head)
{
    if(head->next==0)
    {
        cout<<head->data<<"     ";
        return;
    }
    else
    {
        ReversePrintList(head->next);
    }
    cout<<head->data<<"     ";
    return;
}

void swapIthAndJthElement(Node * head)
{
    int i,j;
    cin>>i>>j;
    Node * temp,* iprev, * jprev,* inext, *jnext,*ith,*jth;
    ith=findKthElement(head,i);
    jth=findKthElement(head,j);
    if (i==1)
    {
        iprev=ith;
        head=jth;
        cout<<head;
    }
    else
    {
        iprev=findKthElement(head,i-1);
    }
    jprev=findKthElement(head,j-1);

    inext=findKthElement(head,i+1);

    if (jth->next==0)
    {
        jnext=0;
    }
    else
    {
        jnext=findKthElement(head,j+1);
    }
    temp=iprev->next;
    iprev->next=jprev->next;
    jprev->next=temp;
    jth->next=inext;
    ith->next=jnext;
    printList(head);
    return;
}
int length(Node * head)
{
    int ans=0;
    while(head)
    {
        head=head->next;
        ans++;
    }
    cout<<ans;
    return ans;
}
int main()
{
    Node * head=createList();
    //printList(head);
    //swapIthAndJthElement(head);
    //length(head);
    //ReversePrintList(head);
    //insertAtKthPosition(head);
    //ReverseList(head);
    midPoint(head);
    return 0;
}
