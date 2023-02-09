#include <iostream>
using namespace std;
#include<vector>

int main()
{
   vector <int> v;
   int n=10;
   for(int i=0;i<10;i++)
   {
       int x;
       cin>> x;
       v.push_back(x);
   }
     for(int i=0;i<10;i++)
   {
       cout<<v[i]<<endl;


   }
}
