/*
find the number is even or not 

*/
#include<iostream>
using namespace std;
bool even_or_not(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num;
    bool result;
cout<<"enter the number :"<<endl;
cin>>num;
result=even_or_not(num);
cout<<boolalpha<<result<<endl;
}
