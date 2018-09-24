//
// Created by AKASH KHANRA on 03/09/18.
//

#include <iostream>
#include <stack>
using namespace std;

void print(char *s)
{
if(*s=='\0')
    return;
print(s+1);
cout<<s<<endl;

}
int main()
{

    char s[]="Akash";
    print(s);

}


