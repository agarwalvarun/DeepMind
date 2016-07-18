#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node * left;
    Node * right;
    Node():left(NULL),right(NULL){}
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
void printPreOrder(Node * root)
{
    Node * currNode=root;
    if(currNode==0)
    {
        return;
    }
    cout<<currNode->data<<"     ";
    printPreOrder(currNode->left);
    printPreOrder(currNode->right);
    return;
}
void printInOrder(Node * root)
{
    Node * currNode=root;
    if(currNode==0)
    {
        return;
    }
    printInOrder(currNode->left);
    cout<<currNode->data<<"     ";
    printInOrder(currNode->right);
    return;
}
void printPostOrder(Node * root)
{
    Node * currNode=root;
    if(currNode==0)
    {
        return;
    }
    printPostOrder(currNode->left);
    printPostOrder(currNode->right);
    cout<<currNode->data<<"     ";
    return;
}
void printLevelOrder(Node *root)
{
    Node * currNode=root;
    queue<Node *> Q;
    Q.push(currNode);
    while(!Q.empty())
    {
        currNode=Q.front();
        cout<<currNode->data<<"     ";
        if(currNode->left!=0)
        {
            Q.push(currNode->left);
        }
        if(currNode->right!=0)
        {
            Q.push(currNode->right);
        }
        Q.pop();
    }
    return;
}
int main()
{
    Node * root;
    root=createTree();
    //cout<<root->data;
    //printPreOrder(root);
    //printInOrder(root);
    //printPostOrder(root);
    printLevelOrder(root);
}
