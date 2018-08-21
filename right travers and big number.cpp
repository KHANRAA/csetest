//
// Created by AKASH KHANRA on 20/08/18.
//

#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL,tos=NULL;

void


int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    for(int i=0;i<s.size();i++)
    {
        cout<<s.top();
        s.pop();
    }
}