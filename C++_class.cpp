#include<iostream>
using namespace std;
class student
{
    string name;
    int Roll_number;

public:
    void set_data()
    {
   cout<<"enter the name and roll number: "<<endl;
   cin>>name>>Roll_number;
    }
    void get_data()
    {
      cout<<"Name: "<<name <<"\nRoll_number :"<<Roll_number<<endl;
    }
};
int main()
{
student R1;
R1.set_data();
R1.get_data();

}
