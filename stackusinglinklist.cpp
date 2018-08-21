//
// Created by AKASH KHANRA on 20/08/18.
//
#include <iostream>
using namespace std;

struct node{
    int data;
    node * next;
}*head=NULL,*tos=NULL;

void push(int data){

    node *newnode=new node;
    newnode->next=NULL;
    newnode->data=data;
    if(head==NULL)
        head=tos=newnode;
    else
    {
        node *curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=newnode;
        tos=curr->next;
    }

}
int top()
{
    if(tos==NULL)
    {
        return -1;
    }else
    {
        return tos->data;
    }

}

int pop()
{
    if(tos==NULL)
    {
        return -1;
    }else
    {
        int data=tos->data;
        node *curr=head,*prev=head;
        if(tos==head)
        {
            curr=tos;
            tos=NULL;
            delete curr;
            return data;
        }
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        tos=prev;
        return data;
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
        cout << "1. push Element \n";
        cout << "2. pop Element \n";
        cout << "3. top\n";
        cout << "4. DIsplay\n";
        cout << "Enter Choice\n";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter data\n";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
            case 3:
                cout<<top()<<endl;
                break;
            case 4:
                display();
            case 5:
                exit(0);


        }

    }
    return 0;



}