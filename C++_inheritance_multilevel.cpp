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

class sport
{
    int score;
public:
    void set_score()
    {
        cout<<"enter the score"<<endl;
        cin>>score;
    }
    void get_score()
    {
        cout<<"score is="<<score<<endl;
    }
};

class Student : public sport, public Person
{

    int fee;

    public:
    void set_s()
        {
            set_p();
            set_score();


        }

    void  get_s()
        {
            get_p();
            get_score();


        }
};


main()
{
    Student s;
    s.set_s();
    s.get_s();

    return 0;
}
