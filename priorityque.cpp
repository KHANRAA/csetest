//
// Created by AKASH KHANRA on 10/09/18.
//

#include <iostream>
using namespace std;
struct node
{
    int data;
    int pr;
    node * next;
}*head=NULL,*curr;

int del()
{
    if(head==NULL)
        return -1;
    curr=head;
    head=head->next;
    if(head==NULL)
    {

    }



}


int main()
{
    int c,number;
    while()
    {
        cout<<"1: enque\n";
        cout<<"2: deque\n";
        cout<<"3: front\n";
        cout<<"4: exit\n";
        cout<<"Enter Choice\n";
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"Enter the data you want to enter...\n";
                cin>>number;
                break;
            case 2:
                cout<<"Enter the proority\n";
                cin>>p;
                add();
                break;
            case 3:
                cout<<"The deleted item is "<<del()<<" \n";
                break;
                case 4:

        }


    }


}
