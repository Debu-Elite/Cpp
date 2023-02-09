#include <iostream>
using namespace std;
template < typename variable1, typename variable2>
class calculator
{
    variable1 num1;
    variable2 num2;
public:
     void set_data(variable1 num1,variable2 num2)
     {
         num1 = num1;
         num2 =num2;
         variable2 sum;
         sum=num1+num2;
         cout<<sum<<endl;

     }
     void second_fun(variable1 s, variable2 j)
     {
         cout<<s*j<<endl;
     }
};
int main()
{
    calculator <int,int> obj1;
    obj1.set_data(10,22);
    calculator <int,float> obj2;
    obj2.set_data(10,2.2);
    obj2.second_fun(4,0.56);
}
