#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *next;
}*tail=NULL;

void add(int data)
{
    node *newnode=new node;
    newnode->data=data;
    if(tail==NULL)
    {
        newnode->next=newnode;
        tail=newnode;
    } else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
}

int front()
{
    if(tail==NULL)
        return -1;
    return tail->next->data;

}

int dq()
{
    if(tail==NULL)
        return -1;
    node *curr=tail->next;
    int data=curr->data;
    if(tail->next==tail)
        tail=NULL;
    else
        tail->next=tail->next->next;
    delete curr;
    return data;
}

int main()
{
    int c;
    while(1)
    {
        cout<<"1: enque\n";
        cout<<"2: deque\n";
        cout<<"3: front\n";
        cout<<"4: exit\n";
        cout<<"Enter Choice\n";
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter data"<<endl;
                    cin>>c;
                    add(c);
                break;
            case 2:
                cout<<"deleted item is  "<<dq()<<endl;
            case 3:
                cout<<"front element "<<front()<<endl;
            case 4:
                exit(0);

        }

    }



}