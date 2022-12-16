/*
To access a global variable when there is a local variable with same name
to define a function outside a class/ namespace
To access a class static variables
in case of multiple inheritance

*/
#include<iostream>
using namespace std;
//int x= 100;
int y= 400;
int main()
{

int x=50;//this is not globally variable
{
    int x=10;
    cout<<"enter the value of x in local"<<x<<endl;
    cout<<"the value of x in global : "<< ::x<< endl;// x is not decleared globally
    cout<<"the value of y : "<< y<< endl;
}
}
