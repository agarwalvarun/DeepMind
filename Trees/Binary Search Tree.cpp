#include<iostream>
#include<queue>
#include<stack>
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
    //do inorder and check if its ascending. if yes then bst otherwise not.


//    static bool flag=true;
//    Node * currNode=root;
//    if(currNode==0)
//    {
//        return flag;
//    }
//    if(currNode->left!=0)
//    {
//        if(currNode->left->data > currNode->data)
//        {
//            flag=false;
//            return flag;
//        }
//        else
//        {
//            isTreeBST(currNode->left);
//        }
//    }
//    if(currNode->right!=0)
//    {
//        if (currNode->right->data < currNode->data)
//        {
//            flag=false;
//            return flag;
//        }
//        else
//        {
//            isTreeBST(currNode->right);
//        }
//    }
//    return flag;
}
void searchBST_helper(Node *root, int val, stack<int> S)
{
    Node * currNode=root;
    if(currNode==0)
    {
        cout<<"node not found"<<endl;
        return;
    }
    S.push(currNode->data);
    if(val<currNode->data)
    {
        searchBST_helper(currNode->left, val, S);
    }
    else if (val>currNode->data)
    {
        searchBST_helper(currNode->right, val,S);
    }
    else
    {
        while(!S.empty())
        {
            cout<<S.top()<<"    ";
            S.pop();
        }
    }
}
void searchBST(Node * root)
{
    int val;
    stack<int> S;
    cout<<"val to be searched"<<endl;
    cin>>val;
    searchBST_helper(root,val,S);
}
void insertBST_helper(Node * root, int val)
{
    Node * currNode=root;
    if(currNode->left==0 && currNode->right==0)
    {
        Node * newChild=new Node;
        newChild->data=val;
        if (val>currNode->data)
        {
            currNode->right=newChild;
        }
        else
        {
            currNode->left=newChild;
        }
        return;
    }
    if(val<currNode->data)
    {
        insertBST_helper(currNode->left, val);
    }
    else if (val>currNode->data)
    {
        insertBST_helper(currNode->right, val);
    }
    return;
}
void insertBST(Node * root)
{
    int val;
    cout<<"val to be inserted"<<endl;
    cin>>val;
    insertBST_helper(root, val);
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
void deleteBST_helper(Node * root, int val)
{

}
void deleteBST(Node * root)
{
    int val;
    cout<<"enter the value to be deleted"<<endl;
    cin>>val;
    deleteBST_helper(root, val);
}
Node * sortedArrayToBST_helper(int arr[], int startIndex, int endIndex)
{
    if(startIndex>endIndex)
    {
        return NULL;
    }
    int midIndex=(startIndex+endIndex)/2;
    Node * currNode=new Node;
    currNode->data=arr[midIndex];
    currNode->left=sortedArrayToBST_helper(arr,startIndex,midIndex-1);
    currNode->right=sortedArrayToBST_helper(arr,midIndex+1,endIndex);
    return currNode;
}
Node * sortedArrayToBST()
{
    int arr[100],val,endIndex=-1,startIndex=0;
    cout<<"enter sorted array"<<endl;
    cin>>val;
    while(val!=-1)
    {
        endIndex++;
        arr[endIndex]=val;
        cin>>val;
    }
    Node * root=sortedArrayToBST_helper(arr,startIndex,endIndex);
    return root;
}
int main()
{
//    Node * root=createBinaryTree();
//    bool check=isTreeBST(root);
//    if(check)
//    {
//        cout<<"yes BST"<<endl;
//    }
//    else
//    {
//        cout<<"not BST"<<endl;
//    }
  //  searchBST(root);
//    insertBST(root);
    Node *root=sortedArrayToBST();
    printLevelOrder(root);
}
