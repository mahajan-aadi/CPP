#include<iostream>
using namespace std;

//function headers
void check(int first,float second,double third);
float mult(float num1,float num2);
void table();

float mult(float num1,float num2)
{
    return num1*num2;
}

void table()
{
    for(int i=1;i<=10;i++)
        cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
}
int main()
{
    float a=19.87,b=89.65;
    cout<<"multiplication of "<<a<<" and "<<b<<"="<<mult(a,b)<<endl;
    table();
}
