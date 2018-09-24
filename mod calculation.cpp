//
// Created by AKASH KHANRA on 24/09/18.
//
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int r=1;
int recu(int x,int n/2)
{
    if(n==1)
    {
        return x;

    }
    if(n & 1)
    {
        t=recu(x,n/2);
        t=t*t;
    }
    return(x,n/2);


}

int main()
{

    int a,x,z;
    cin>>a;
    cin>>x;
    recu(x,a/z);

}

