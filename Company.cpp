#include<bits/stdc++.h>
using namespace std;
class Company
{

string address;
int No_employee;
long long int turnover;
protected:string Name_company;
public:

    void set_data()
    {
        cout<<"enter the company Name"<<endl;
        cin>>Name_company;
        cout<<"enter the company address"<<endl;
        cin>>address;
        cout<<"enter the turnover Name"<<endl;
        cin>>turnover;
        cout<<"enter the No_employee "<<endl;
        cin>>No_employee;
    }
    public:
    Company()// constructor
    {


      Name_company="xyz";
        No_employee=500;
        turnover=10000000;
        address="delhi";
    }

    void company_display()
    {
        cout<<" company Name :"<<Name_company<<endl;
        cout<<" company address :"<<address<<endl;
        cout<<" turnover :"<<turnover<<endl;
        cout<<" No_employee :"<<No_employee<<endl;
        cout<< "  "<<endl;
    }

};
class employee: public Company
{
    string Name_employee;
    string address_employee;
    int salary;
   public:
        void set_data_employee()
       {
        cout<<"enter the name of employee"<<endl;
        cin>>Name_employee;
        cout<<"enter employee address"<<endl;
        cin>>address_employee;
        cout<<"enter the salary of employee"<<endl;
        cin>>salary;
       }
    void employee_Display()
    {
        cout<<Name_employee<<endl;
        cout<<address_employee<<endl;
        cout<<salary<<endl;
    }
    public:
    employee()//constructor
    {
         Name_employee="jkl";
        address_employee="gwalior";
        this->salary=1000000;
    }

};



// product class
class product:public Company{

    string product_details[5];
    double price;
    protected: string Pname;
    public:
    void set_product_details()
    {
     cout<<"enter the product name"<<endl;
     cin>>Pname;
     cout<<"enter the product price"<<endl;
     cin>>price;
    }

    friend void enter_details(product &y);

   void product_display()
   {
       cout<<"product price:"<<price<<endl;
       cout<< "product_name:"<<Pname<<endl;
       cout<<"company Name:"<<Name_company<<endl;

       for(int i=0;i<5;i++)
       {
           cout<<product_details[i]<<endl;
       }
   }

};
void enter_details(product &y)
{

    for(int i =0;i<5;i++)
    {
        cout<<"enter the "<<i+1<<" string"<<endl;
        cout<<y.product_details[i]<<endl;
    }
}
class team : public product, public employee{
int Number_of_team;
string deparment;

public:

void set_team_details()
{
    cout<<"enter the number of team members"<<endl;
    cin>>Number_of_team;
}
void team_display()
{
    cout<<"product name :"<<Pname<<endl;
    cout<<" number of team members"<<Number_of_team<<endl;
}
};
int main()
{
  int Case,x=1,y=1,z=1;
    int Case2;
    Company zone;
    employee emp;
    product pro;
    vector<employee> emp_vec;
    team team1;

    while(x)
    {
        cout<<"enter 4 digit pin for editing mode"<<endl<<" else press 11 to see the details"<<endl;
        cout<<"  press 0 to exit"<<endl;
        cin>>Case2;
        switch(Case2)
        {
    case 5678:
        while(y)
        {


        cout<<"enter 1 to set the company details"<<endl<<"enter 2 to set the Employee details"<<endl;
        cout<<"enter 3 to set the product details"<<endl<<"enter 4  to set the team details"<<endl;
        cout<<"enter 5 to back  menu"<<endl;

        cin>>Case;
        switch(Case)
        {

            case 1:
                zone.set_data();
                break;
            case 2:
                emp.set_data_employee();

                break;
            case 3:

                pro.set_product_details();

                break;
            case 4:
                team1.set_product_details();
                team1.set_team_details();
                break;
            case 5:
                y=0;
                break;

            default :
                cout<<"not an option"<<endl;
                break;
            }
        }
        break;
    case 11:
        {
             while(z)
                {
                    cout<<"enter 1 to see the company details"<<endl<<"enter 2 to see the Employee details"<<endl<<"enter 3 to see the product details"<<endl;
                    cout<<"enter 4  to set the team details"<<endl;
                    cout<<"enter 5 to back  menu"<<endl;
                    cin>>Case2;
                     switch(Case2)
                     {

                        case 1:
                         zone.company_display();
                         break;
                        case 2:
                         emp.employee_Display();

                         break;
                        case 3:
                         pro.product_display();
                         break;
                        case 4:
                         team1.team_display();
                         break;
                       case 5:
                         z=0;
                        break;
                       default :
                       cout<<"not an option for main case"<<endl;
                        break;
                    }
                }
        break;
        case 0:
         x=0;
        default :
            cout<<"not an option for main case"<<endl;
        break;
    }
    }
}
}
