/*
user define namespace using directive method
*/
#include<iostream>
using namespace std;
namespace SBI
    {
        int account_number = 3637;
        void Sbi_function()
        {
            cout<< "welcome to sbi your accout number is: "<< account_number<< endl;
        }
    }


namespace ICICI
    {
        int account_number = 7879;
        void ICICI_function()
        {
            cout<< "welcome to ICICI your accout number is: "<< account_number<< endl;
        }
    }
using namespace SBI; // directive method
int main()
{
    cout<< account_number<<endl;
    SBI::Sbi_function();
    cout<< ICICI :: account_number<<endl;
    ICICI::ICICI_function();

}
