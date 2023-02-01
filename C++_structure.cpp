#include<iostream>
using namespace std;
struct st
{
    int x;
    int y;
    int j;
    void test()
    {
        int s;
        char c;
        cout<<"test in structure "<<endl;
    }
};
int main()
{
struct st sizes;
sizes.test();
cout<<sizeof(sizes)<<endl;

}
