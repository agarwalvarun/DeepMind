#include<iostream>
using namespace std;
int arr[100],index=0;
void createStack()
{
    int val;
    cin>>val;
    for(int i=index;val!=-1;i++)
    {
        arr[i]=val;
        index=i;
        cin>>val;
    }
}
bool is_stack_empty()
{
    if (index==0)
    {
        return true;
    }
    return false;
}
int top_stack()
{
    if(is_stack_empty())
    {
        return -1;
    }
   return arr[index];
}
void push_stack(int val)
{
    if (index==0)
    {
        arr[index]=val;
    }
    else
    {
        index++;
        arr[index]=val;
    }
    return ;
}
void pop_stack()
{
    if (is_stack_empty())
    {
        return;
    }
    index--;
    return;
}

int main()
{
    createStack();
    return 0;
}
