#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node * left;
    Node * right;
    Node(): left(NULL),right(NULL){}
};
Node * createBinaryTree()
{
    int val;
    char ch;
    queue<Node *> Q;
    Node * root,* currNode;
    cout<<"Enter data for root Node"<<endl;
    cin>>val;
    root=new Node;
    root->data=val;
    Q.push(root);
    while(!Q.empty())
    {
        currNode=Q.front();
        cout<<"Does it have a left child. Current Node is "<<currNode->data<<endl;
        cin>>ch;
        if(ch=='y')
        {
            Node * leftChild=new Node;
            cout<<"Enter data for left child"<<endl;
            cin>>val;
            leftChild->data=val;
            currNode->left=leftChild;
            Q.push(leftChild);
        }
        cout<<"Does it have a right child. Current Node is "<<currNode->data<<endl;
        cin>>ch;
        if(ch=='y')
        {
            Node * rightChild=new Node;
            cout<<"Enter data for right child"<<endl;
            cin>>val;
            rightChild->data=val;
            currNode->right=rightChild;
            Q.push(rightChild);
        }
        Q.pop();
    }
    return root;
}
bool isTreeBST(Node * root)
{
    static bool flag=true;
    Node * currNode=root;
    if(currNode==0)
    {
        return flag;
    }
    if(currNode->left!=0)
    {
        if(currNode->left->data > currNode->data)
        {
            flag=false;
            return flag;
        }
        else
        {
            isTreeBST(currNode->left);
        }
    }
    if(currNode->right!=0)
    {
        if (currNode->right->data < currNode->data)
        {
            flag=false;
            return flag;
        }
        else
        {
            isTreeBST(currNode->right);
        }
    }
    return flag;
}
int main()
{
    Node * root=createBinaryTree();
    bool check=isTreeBST(root);
    if(check)
    {
        cout<<"yes BST"<<endl;
    }
    else
    {
        cout<<"not BST"<<endl;
    }
}
