/*
DMA in array

*/
#include<iostream>
using namespace std;



int main()
{
int *ptr;
ptr =new int[5];
cout<<"enter the value for i:"<<endl;
for(int i=0;i<5;i++)
    cin>>ptr[i];

for(int i=0;i<5;i++)
cout<<*(ptr+i)<<endl;
delete ptr;


}
