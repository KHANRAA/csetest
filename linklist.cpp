//
// Created by AKASH KHANRA on 20/08/18.
//

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

}*head=NULL;

void add(int data)
{
    node *newnode=new node;
    newnode->next=NULL;
    newnode->data=data;
    if(head==NULL)
        head=newnode;
    else
        {
        node *curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=newnode;

    }
}

void display()
{
    if(head==NULL)
    {
        cout<<"EMpty List";
        return;
    }else
    {
        node *curr=head;
        while(curr!=NULL)
        {
            cout<<curr->data<<endl;
            curr=curr->next;
        }
    }

}


int main()
{
    int data,ch;
    while (1)
    {
        cout << "1. Enter Element \n";
        cout << "2. Display\n";
        cout << "3. Exit\n";
        cout << "Enter Choice\n";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter data\n";
                cin >> data;
                add(data);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);


        }

    }
    return 0;
}
