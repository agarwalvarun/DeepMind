#include<iostream>
#include<queue>
#include<stack>
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
void printIterativeInOrder(Node * root)
{
    Node * currNode=root;
    stack<Node *> S;
    queue<int> Q;
    S.push(currNode);
    currNode=S.top();
    while(!S.empty())
    {
        currNode=S.top();
        if(currNode->left!=0)
        {
            S.push(currNode->left);
            continue;
        }
        else
        {
            Q.push(currNode->data);
        }
        if(currNode->right!=0)
        {
            S.pop();
            S.push(currNode->right);
            continue;
        }
        S.pop();
    }
}
void RootToLeafSum_helper(Node * currNode,Node * root, int val,int sum, stack<int> &S, stack<int> &final_S, bool &flag)
{
    sum+=currNode->data;
    S.push(currNode->data);
    if(currNode->left==0 && currNode->right==0)
    {
        if(sum==val)
        {
            cout<<sum<<endl;
            if(!flag)
            {
                stack<int> temp=S;
                while(!temp.empty())
                {
                    final_S.push(temp.top());
                    temp.pop();
                }
                flag=true;
            }
            return;
        }
        S.pop();
        return;
    }
    if (currNode->left!=0)
    {
        RootToLeafSum_helper(currNode->left,root,val,sum,S,final_S,flag);
    }
    if(currNode->right!=0)
    {
        RootToLeafSum_helper(currNode->right,root,val,sum,S,final_S,flag);
    }
    S.pop();
}
void RootToLeafSum(Node * root)
{
    int val,sum=0;
    stack<int> S,final_S;
    bool flag=false;
    cout<<"Enter the sum to be checked";
    cin>>val;
    RootToLeafSum_helper(root,root, val,sum, S,final_S,flag);
    if(flag)
    {
        cout<<"YES      ";
        while(!final_S.empty())
        {
            cout<<final_S.top()<<"   ";
            final_S.pop();
        }
    }
    else
    {
        cout<<"no";
    }
    return;
}
void height_helper(Node * root, stack<int> &s,int h)
{
    Node * currNode=root;
    h++;
    if(currNode->left==0 && currNode->right==0)
    {
        s.push(h);
        return;
    }
    if(currNode->left!=0)
    {
        height_helper(currNode->left,s,h);
    }
    if(currNode->right!=0)
    {
        height_helper(currNode->right,s,h);
    }
    return;
}
int height(Node * root)
{
    stack<int> s;
    int h=0;
    height_helper(root, s,h);
    h=0;
    while(!s.empty())
    {
        if(h<=s.top())
        {
            h=s.top();
            //cout<<"here     "<<h<<endl;
        }
        s.pop();
    }
    return h-1;
}
void sameTree_helper(Node * currNode, queue<int> &d,queue<char> &c, char ch)
{
    if(currNode==0)
    {
        return;
    }
    sameTree_helper(currNode->left,d,c,'l');
    d.push(currNode->data);
    c.  push(ch);
    sameTree_helper(currNode->right,d,c,'r');
}
void sameTree()
{
    Node * rootA, * rootB;
    queue<int> dA,dB;
    queue<char> cA,cB;
    bool flag=false;
    rootA= createTree();
    rootB = createTree();
    sameTree_helper(rootA,dA,cA,'l');
    sameTree_helper(rootB,dB,cB,'l');
//    while(!cA.empty())
//    {
//        cout<<cA.front()<<"   ";
//        cA.pop();
//    }
//    cout<<endl;
//    while(!cB.empty())
//    {
//        cout<<cB.front()<<"   ";
//        cB.pop();
//    }
    while(1)
    {
        if (dA.front()==dB.front() && cA.front()==cB.front() && !dA.empty() && !dB.empty())
        {
            dA.pop();
            dB.pop();
            cA.pop();
            cB.pop();
            continue;
        }
        if(dA.empty() && dB.empty())
        {
            flag=true;
        }
        break;
    }
    if(flag)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
    return;
}
int DepthOfNode_helper(Node * currNode,Node * finalNode, int d)
{
    static int ans=-1;
    if (currNode==0)
    {
        return ans;
    }
    d++;
    if(currNode->data==finalNode->data && currNode->left==finalNode->left && currNode->right==finalNode->right)
    {
        ans=d;
        return ans;
    }
    DepthOfNode_helper(currNode->left,finalNode,d);
    DepthOfNode_helper(currNode->right,finalNode,d);
    return ans;
}
int DepthOfNode(Node * root, Node * finalNode)
{
    int d=-1,ans;
    ans=DepthOfNode_helper(root,finalNode,d);
   // cout<<ans;
    return ans;
}
void LevelOrderTraversalInSpiralOrder(Node * root)
{
//    Node * currNode=root;
//    int i=DepthOfNode(root, currNode);
//    queue<Node *> Q;
//    Q.push(currNode);
//    while(!Q.empty())
//    {
//        currNode=Q.front();
//        cout<<currNode->data<<"     ";
//        i=DepthOfNode(root, currNode);
//        if(i%2!=0)
//        {
//            if(currNode->left!=0)
//            {
//                Q.push(currNode->left);
//            }
//            if(currNode->right!=0)
//            {
//                Q.push(currNode->right);
//            }
//        }
//        else
//        {
//            if(currNode->right!=0)
//            {
//                Q.push(currNode->right);
//            }
//            if(currNode->left!=0)
//            {
//                Q.push(currNode->left);
//            }
//        }
//        Q.pop();
//    }
//    return;
}
void printLeftView_helper(Node *currNode, int level)
{
    static int max_level=0;
    if(currNode==0)
    {
        return;
    }
    if(level==0 && max_level==0)
    {
        cout<<currNode->data<<"     ";
    }
    else if(level>max_level)
    {
        max_level=level;
        cout<<currNode->data<<"     ";
    }
    printLeftView_helper(currNode->left,level+1);
    printLeftView_helper(currNode->right,level+1);
    return;
}
void printLeftView(Node * root)
{
    int level=0;
    printLeftView_helper(root, level);
}
int main()
{
    Node * root;
    root=createTree();
    //cout<<root->data;
    //printPreOrder(root);
    //printInOrder(root);
    //printPostOrder(root);
    //printLevelOrder(root);
    //int h=height(root);
    //cout<<"height of the tree is    "<<h<<endl;
    //RootToLeafSum(root);
    //sameTree();
    //DepthOfNode(root,root->left->left);
    //LevelOrderTraversalInSpiralOrder(root);
    printLeftView(root);
}
