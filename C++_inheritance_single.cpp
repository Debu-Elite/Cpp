#include<iostream>
using namespace std;

class Person
{
    int id;


    public:
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
        }
          void get_p()
        {
            cout<<"Id=:"<<id<<endl;

        }
};

class Student: public Person
{

    int fee;

    public:
    void set_s()
        {
            set_p();



        }

    void  get_s()
        {
            get_p();



        }
};

main()
{
    Student s;
    s.set_s();
    s.get_s();
    return 0;
}
