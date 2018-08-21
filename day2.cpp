//
// Created by AKASH KHANRA on 07/08/18.
//

#include <iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5},r;
    cout<<"Enter how many ratations\n";
    int b[r];
    cin>>r;
    for(int i=0;i<r;i++) {
        b[i] = a[i];
    }
    for(int i=0;i<(5-r);i++)
    {
        a[i]=a[i+r];

    }
    cout<<"Array is: \n";
    for(int i=0;i<(5-r);i++)
    {
        cout<<a[i]<<" ";

    }
    for(int i=0;i<r;i++)
    {
        cout<<b[i]<<" ";

    }

}