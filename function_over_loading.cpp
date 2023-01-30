/*
find the number is even or not

*/
#include<iostream>
using namespace std;
int add(int a, int b, int c)
{
    return a+b+c;
}
int add(int a, int b)
{
    return a+b;
}
double add(double a, double b, double c)
{
    return a+b+c;
}
int add(int a=10)
{
    return a;
}



int main()
{

cout<< "sum ="<<add(10.10)<<endl;

}
