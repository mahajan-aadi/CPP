#include<iostream>
using namespace std;

float add(float a,float b);
int main()
{
    float a,b,total;
    cout<<"Enter data with space:";
    cin>>a>>b;
    total=add(a,b);
    cout << total;
    return 0;
}
float add(float a,float b)
{
    float total;
    total=a+b;
    return total;
}
