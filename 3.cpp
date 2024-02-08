// WAP to illustrate function overriding and its resolution.//
#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
};
class two:public one
{
    private:
    int b,s;
    public:
    void input()
    {
        one::input();
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void sum()
    {
        s=a+b;
    }
    void display()
    {
        cout<<"The sum is"<<s<<endl;
    }

};
int main()
{
    two t1;
    t1.input();
    t1.sum();
    t1.display();
    getch();
    return 0;
}