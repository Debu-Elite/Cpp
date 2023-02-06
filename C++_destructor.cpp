#include <iostream>
using namespace std;
class A
{
    int x,y;
public :
    A()//A is a constructor with the class name
    {
        cout<<"constructor"<<endl;
        x=10;
        y=20;
    }

    void get_data()
    {
        cout<<"x="<<x<<"\n"<<"y ="<<y<<endl;
    }
    ~A()
    {
        cout<< "destructor working "<<endl;
    }

};
int main()
{
  A a1;
  a1.get_data();
}
