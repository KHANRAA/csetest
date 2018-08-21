#include <iostream>

using namespace std;
/*
void insertarray(int a[],int pos,int val)
{
    for(int i=4;i>pos;i--)
    {
        a[i]=a[i-1];
        a[pos]=val;
    }
}
*/
void deletefromarray(int a[],int poss)
{

    for(int i=poss;i<4;i++)
    {
        a[i]=a[i+1];
    }


}

void sercah(int a[],int value) {

    for (int i = 0; i < 5; i++) {
        if (a[i] == value) {
            cout << "FOund" << endl;
            break;
        }
        else if(a[i]=='\0')
        {
            cout<< "N0t F0und"<<endl;
        }
    }
}

int main() {
    int a[5]={1,2,3,4},pos,val;
   /* cout<<"Enter the pos where u insert the nuber\n";
    cin>>pos;
    cout<<"Enter the number u want to insert\n";
    cin>>val;

    int poss;
    cout<<"Enter the location to delete\n";
    cin>>poss;
    insertarray(a,pos,val);
    deletefromarray(a,poss);
    */
   cin>>val;
   sercah(a,val);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}