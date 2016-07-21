#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node *left, * right;
    Node(): left(0),right(0){}
};
Node * createTree()
{
    Node * root=new Node;
    int val;
    queue<Node *> Q;
    cout<<"Enter data for root node"<<endl;
    cin>>val;
    root->data=val;
    Q.push(root);
    while(!Q.empty())
    {
        Node * currNode=Q.front();
        Q.pop();
        char choice;
        cout<<"does node have a left child? the node is "<<currNode->data<<endl;
        cin>>choice;
        if(choice=='y')
        {
            Node * leftNode=new Node;
            cout<<"Enter data for left child"<<endl;
            cin>>val;
            leftNode->data=val;
            currNode->left=leftNode;
            Q.push(leftNode);
        }
        cout<<"does node have a right child? the node is "<<currNode->data<<endl;
        cin>>choice;
        if(choice=='y')
        {
            Node * rightNode=new Node;
            cout<<"Enter data for right child"<<endl;
            cin>>val;
            rightNode->data=val;
            currNode->right=rightNode;
            Q.push(rightNode);
        }
    }
    return root;
}
bool isMinHeap(Node * root)
{
    bool flag=true;
    queue<Node *> Q;
    Node * currNode=root;
    Q.push(currNode);
    while(!Q.empty())
    {
        currNode=Q.front();
        if(currNode->left!=0)
        {
            if(currNode->data < currNode->left->data)
            {
                Q.push(currNode->left);
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(currNode->right!=0)
        {
            if(currNode->data < currNode->right->data)
            {
                Q.push(currNode->right);
            }
            else
            {
                flag=false;
                break;
            }
        }
        Q.pop();
    }
    return flag;
}
void heapify(int arr[],int currIndex, int n)
{
    int leftChild=2*currIndex+1;
    int rightChild=2*currIndex+2, largest = currIndex;
    if (leftChild>n)
    {
        return;
    }

    if(leftChild<n && arr[largest]<arr[leftChild])
    {
        largest=leftChild;
    }

    if(rightChild<n && arr[largest] < arr[rightChild])
    {
        largest=rightChild;
    }

    if (largest == currIndex)
    {
        return;
    }

    int temp=arr[currIndex];
    arr[currIndex]=arr[largest];
    arr[largest]=temp;
    heapify(arr, largest, n);
    return;
}
int main()
{
   // Node * root = createTree();
//    bool flag=isMinHeap(root);
//    if(flag)
//    {
//        cout<<"yes MinHeap"<<endl;
//    }
//    else
//    {
//        cout<<"Not MinHeap"<<endl;
//    }
//    return 0;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heapify(arr,0,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"     ";
    }
    return 0;
}
