#include<iostream>
using namespace std;
class base_1
{
public:
    int a=0;
    void display_base1()
    {
        cout<<"base1"<<endl;
        a+=5;
        cout<<a<<endl;
    }
    base_1(void)
    {
        cout<<"base1"<<endl;
    }
};
class base_2
{
public:
    int b=0;
    void display_base2()
    {
        b+=10;
        cout<<"base2"<<endl;
        cout<<b<<endl;
    }
    base_2()
    {
        cout<<"base2"<<endl;
    }
};
class child_1:public base_1
{
public:
    int c=0;
    void display_child1()
    {
        c+=15;
        cout<<"child 1"<<endl;
        display_base1();
        cout<<(a+c)<<endl;
    }
    child_1()
    {
        cout<<"child_1"<<endl;
    }
};
class child_2:public base_1
{
public:
    int d=0;
    void display_child2()
    {
        d+=20;
        cout<<"child 2"<<endl;
        display_base1();
        cout<<(a+d)<<endl;
    }
    child_2()
    {
        cout<<"child_2"<<endl;
    }
};
class child_3:public base_1,base_2
{
public:
    int e=0;
    void display_child3()
    {
        e+=25;
        cout<<"child 3"<<endl;
        display_base1();
        display_base2();
        cout<<(a+b+e)<<endl;
    }

    child_3()
    {
        cout<<"child_3"<<endl;
    }
};
class child_child_1:public child_1
{
public:
    int f=0;
    void display_child_child_1()
    {
        f+=30;
        cout<<"child child 1"<<endl;
        display_child1();
        cout<<(a+c+f)<<endl;
    }
    child_child_1()
    {
        cout<<"child_child_1"<<endl;
    }
};
int main()
{
    base_1 d1;
    base_2 d2;
    child_1 d3;
    child_2 d4;
    child_3 d5;
    child_child_1 d6;
    return 0;
}
