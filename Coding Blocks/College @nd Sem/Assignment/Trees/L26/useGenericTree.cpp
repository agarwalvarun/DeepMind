#include<iostream>
#include"GenericTree.h"
using namespace std;
int main() {
    GenericTree<char> T;
    T.createTree();
    T.printTree();
    T.printPreOrder();
    return 0;
}
