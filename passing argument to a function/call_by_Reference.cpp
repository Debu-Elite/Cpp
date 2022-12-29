/*
Reference variable
it is used to provide alias name/duplicate name for an existing variable
reference variable must be initialized at time of declaration

*/
#include<iostream>
using namespace std;
void swaping(int &a, int &b);

int main()

{
int x,y;
cout<<"enter the value of x and y"<<endl;
cin>>x;
cin>>y;
cout<<" the value before swaping of x "<<x<<" and value of y "<<y<<endl;
swaping(x,y);
cout<<" the value after swaping of x "<<x<<" and value of y "<<y<<endl;
}
void swaping(int &a, int &b)
{
    cout<<"function"<<endl;
    int z;
    z=a;
    a=b;
    b=z;

}
