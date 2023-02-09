#include<iostream>
using namespace std;


// template function
template <class New_Data_type>
  New_Data_type function1(New_Data_type s)
    {
        s=s*s;
        cout<<s<<endl;

    }
template <class New_float,class New_int>
  New_float function2(New_float s, New_int t)
    {
return s*t;

    }

int main()
{
int d=90;
float f= 7.778;
function1(f);
cout<<function2(f,d)<<endl;
}
