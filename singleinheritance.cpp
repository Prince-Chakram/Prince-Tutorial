#include<iostream>
using namespace std;
class A
{
    public:
    void getdata()
    {
        cout<<"\n base class";
    }
};
class B:public A 
{
    public:
    void showdata()
    {
        cout<<"\n derived class";
    }
};

int main()
{
    B b1;
    b1.getdata();
    b1.showdata();
    return 0;
}