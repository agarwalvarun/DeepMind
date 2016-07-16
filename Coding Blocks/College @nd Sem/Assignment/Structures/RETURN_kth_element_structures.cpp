#include<iostream>
using namespace std;
struct node
{
    int value;
    node *address;
};
node create_list()
{
    int value;
    node *head=0;
    node*current_node, node*prev_node;
    cout<< "enter the values in list"<<endl;
    cin>> value;
    while (value!=-1)
    {
        current_node= new node;
        current_node->value=value;
        current_node->address=0;
        if (*head==0)
        {
            head=current_node;
        }
        else
        {
            prev_node=current_node;
        }
        cin>> value;
    }
}
node find_element()
{

}
