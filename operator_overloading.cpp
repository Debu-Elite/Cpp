#include<iostream>
using namespace std;
class Box
{

int x;
int y;
public:
Box()
{
   x=0;
   y=0;

}
Box (int x, int y)
{
    this->x=x;
    this->y=y;

}
Box add(Box b)
{
    Box c;
    c.x=x+b.x;
    c.y=y+b.y;
    return c;
}
Box operator +(Box b)
{
Box c;
    c.x=x+b.x;
    c.y=y+b.y;
    return c;
}
void display()
{
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
}

};
int main()
{
    Box a(6,7), b(9,10), c,d;

   // c=a.add(b);
  //  c.display();
    d=a+b;
    d.display();
}
