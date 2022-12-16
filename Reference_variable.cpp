/*
Reference variable
it is used to provide alias name/duplicate name for an existing variable
*/
#include<iostream>
using namespace std;

int main()

{
    int x=10;
    int &rv =x;

    cout<<"address of x"<<&x<<endl;
    cout<<"address of reference variable="<< &rv<< endl;//
    cout<<"the value of x : "<< x<< endl;
    rv =50;

  cout<<"the value of rv  "<<rv<<endl;
}
