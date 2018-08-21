//
// Created by AKASH KHANRA on 06/08/18.
//
#include <iostream>
using namespace std;

long long cBinaryToDecimal(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int len(int no)
{
    int a=0;
    while(no>0)
    {
        no=no/10;
        a++;
    }
    return a;
}
int main()
{
    long a,b,m,n;
    int dnum1,dnum2;
    cout<<"Enter the decimal number\n";
    cin>>dnum1;
    a=cBinaryToDecimal(dnum1);
    cout<<"Enter the second number\n";
    cin>>dnum2;
    b=cBinaryToDecimal(dnum2);
    cout<<a<<endl<<b<<endl;
    m=len(a);
    n=len(b);
    cout<<"Result: "<<m-n;



}
