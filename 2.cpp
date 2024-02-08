// WAP to convert metre to feet using class to class conversion.//
#include<iostream>
#include<conio.h>
using namespace std;
class meter;
class feet
{
    private:
    float ft;
    public:
    feet()
    {
        ft=0.0;
    }
    feet(float ft1)
    {
        ft=ft1;
    }
    void display()
    {
        cout<<"The equivalent feet is "<<ft<<endl;
    }
};
class meter
{
    private:
    float m;
    public:
    void input()
    {
        cout<<"Enter the value of m"<<endl;
        cin>>m;
    }
    operator feet()
    {
        float ft1;
        ft1=3.28*m;
        return(feet(ft1));
    }

};
int main()
{
    meter m2;
    feet f2;
    m2.input();
    f2=m2;
    f2.display();
    getch();
    return 0;

}