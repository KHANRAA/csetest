//
// Created by AKASH KHANRA on 13/08/18.
//

#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    int p=0,q=0;
    int m;
    cin>>m;

    for(int i=m;i<5;i++)
    {
        b[p]=a[i];
        p++;

    }
    for(int i=p;i<p+m;i++)
    {
        b[i]=a[q];
        q++;
    }
    b[p]=a[0];
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
}