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
int main()
{
    Node * root = createTree();

}
