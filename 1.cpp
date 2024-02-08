// WAP to convert polar coordinates to Cartesian (rectangular) coordinates using class to class conversion.//
#include<iostream>
#include <conio.h>
#include<math.h>
using namespace std;
class polar;
class cart
{
    private:
    float x,y;
    public:
    cart()
    {
        x=0.0;
        y=0.0;

    }
    cart(float x1,float y1)
    {
        x=x1;
        y=y1;
    }
    void display()
    {
        cout<<"The equivalent x-coordinate and y-coordinate is"<<x<<endl<<y;

    }

};
class polar
{
    private:
    float r, arg;
    public:
    void input()
    {
        cout<<"Enter the value of r and arg"<<endl;
        cin>>r>>arg;
    }
    operator cart()
    {
        float x1=r*cos(arg);
        float  y1=r*sin(arg);
        return(cart(x1,y1));
    }
};
int main()
{
    cart c1;
    polar p1;
    p1.input();
    c1=p1;
    c1.display();
    getch();
    return 0;
}