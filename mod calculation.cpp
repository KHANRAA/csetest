//
// Created by AKASH KHANRA on 24/09/18.
//

#include <iostream>
using namespace std;

int recu(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n & 1) {
            res = res * x;


            n = n >> 1;
            x = x * x;
        }
    }
    return res;

}

int main()
{

    int x,n;
    cin>>x;
    cin>>n;
    cout<<recu(x,n);

}

