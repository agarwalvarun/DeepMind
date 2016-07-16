#ifndef GENERIC_TREE_H
#define GENERIC_TREE_H
#include"GenericTreeNode.h"
#include<iostream>
#include<queue>
using namespace std;
template <typename T>
class GenericTree {
    GenericTreeNode<T> * root;
    public:
    GenericTree() : root(0){}
    void createTree() {
        T ele;
        cout << "Enter data for root node ";
        cin >> ele;
        root = new GenericTreeNode<T>(ele);
        queue<GenericTreeNode<T> *> Q;
        Q.push(root);
        while(!Q.empty()) {
            GenericTreeNode<T> * temp = Q.front();
            Q.pop();
            cout << "Enter child count for node with data " << temp->data << " ";
            cin >> temp->child_count;
            temp->children = new GenericTreeNode<T>*[temp->child_count];
            for (int i = 0; i < temp->child_count; i++) {
                cout << "Enter data for " << i+1 << " child of " << temp->data << " ";
                cin >> ele;
                temp->children[i] = new GenericTreeNode<T>(ele);
                temp->children[i]->parent = temp;
                Q.push(temp->children[i]);
            }
        }
    }
    void printTree() {
        if (!root) return;
        queue<GenericTreeNode<T>*> Q;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()) {
            GenericTreeNode<T> * temp = Q.front();
            Q.pop();
            if (temp == NULL) {
                cout << endl;
                if (!Q.empty()) {
                    Q.push(NULL);
                }
                continue;
            }
            cout << temp->data << " ";
            for(int i = 0; i < temp->child_count; i++) {
                Q.push(temp->children[i]);
            }
        }
    }
    void printPreOrder() {
        printPreOrderHelper(root);
        cout << endl;
    }
    int height() {
        return heightofNode(root);
    }
    GenericTreeNode<T>* largestNode() {
        return largestNodeHelper(root);
    }
    void printAtDepthK(int K) {
        if (K < 0 || !root) {
            return;
        }
        printAtDepthKHelper(root, K);
        cout << endl;
    }
    private:
    static void printPreOrderHelper(GenericTreeNode<T> * root) {
        if (!root) return;
        cout << root->data << " ";
        for(int i = 0 ; i < root->child_count; i++) {
            printPreOrderHelper(root->children[i]);
        }
        return;
    }
    static int heightofNode(GenericTreeNode<T> *root) {
        if (!root || root->child_count == 0) return 0;
        int h = -1;
        for(int i = 0; i < root->child_count; i++) {
            int temp = heightofNode(root->children[i]);
            h = temp > h ? temp : h;
        }
        return h+1;
    }
    static GenericTreeNode<T>* largestNodeHelper(GenericTreeNode<T> * root) {
        if (!root) {
            return root;
        }
        GenericTreeNode<T> * l = root;
        for(int i = 0; i < root->child_count; i++) {
            GenericTreeNode<T> * temp = largestNodeHelper(root->children[i]);
            l = temp->data > l->data ? temp : l;
        }
        return l;
    }
    static GenericTreeNode<T> * printAtDepthKHelper(GenericTreeNode<T> * root, int K) {
        if (K == 0) {
            cout << root->data << " ";
            return;
        }
        for(int i =0 ; i < root->child_count; i++) {
            printAtDepthKHelper(root->children[i], K-1);
        }
        return;
    }

};
#endif
