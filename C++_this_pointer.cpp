#include<iostream>
using namespace std;
class Box
{
    int L;
    int B;
    int H;
    public:
    void set_data(int L, int B, int H)
    {
        this->L=L;
        this->B=B;
        this->H=H;
    }
    int area()
    {
     return L*B*H;
    }
};
int main()
{
    Box a;
    a.set_data(5,6,7);
    cout<<a.area()<<endl;
}
