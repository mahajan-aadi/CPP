#include<iostream>
using namespace std;
const int *pnt;
int main()
{
    int data1=128,data2=256;
    pnt=&data1;
    cout<<*pnt;
    pnt=&data2;
    cout<<endl<<*pnt;
}
