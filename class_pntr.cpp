#include<iostream>
using namespace std;

class data
{
public:
    int a,b;
};
int data::*ptr=&data::a;
int main()
{
    data d1,d2,*pnt;
    pnt=&d2;
    cout<<pnt<<endl;
    //int data::*ptr=&data::a;
    d1.a=5;
    d2.a=8;
    cout<<pnt->*ptr<<endl;

}
