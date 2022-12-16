/*
Reference variable
it is used to provide alias name/duplicate name for an existing variable
reference variable must be initialized at time of declaration

*/
#include<iostream>
using namespace std;

int main()

{
    int x=10;
    const int &rv=50;// you can't refer to constant value

    cout<<"address of x"<<&x<<endl;
    cout<<"address of reference variable="<< &rv<< endl;//
    cout<<"the value of x : "<< x<< endl;


  cout<<"the value of rv  "<<rv<<endl;
}
