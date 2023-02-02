 #include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int Roll_number;
    int age;

public:
    void set_data()
    {
   cout<<"set_data= "<<this<<endl;
   cin>>name>>Roll_number;
    }
    void get_data()
    {
        cout<<"get_data= "<<this<<endl;
        cout<<"Roll_number"<<&Roll_number<<endl;
      cout<<"Name: "<<name <<"\nRoll_number :"<<Roll_number<<endl;
    }
};
int main()
{
student S1, S2, S3;
cout<< "address of S1 :"<<&S1<<endl;
cout<< "address of S2 :"<<&S2<<endl;
cout<< "address of S1 roll number= :"<<&S1.Roll_number<<endl;
cout<< "address of S1 age= :"<<&S1.age<<endl;
cout<< "address of S2 roll number= :"<<&S2.Roll_number<<endl;
cout<< "address of S2 age= :"<<&S2.age<<endl;
S1.set_data();
S1.get_data();
S2.set_data();
S2.get_data();
}
