/*
Reference variable
it is used to provide alias name/duplicate name for an existing variable
reference variable must be initialized at time of declaration

*/
#include<iostream>
using namespace std;
int& returns()
{
    static int k=46;
    cout<< "value of k"<<k<<endl;
    return k;
}

int main()
{
returns()=48;
returns();

}
