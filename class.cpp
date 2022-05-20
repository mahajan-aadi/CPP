#include<iostream>
#include<iomanip>
using namespace std;

const string name="QWE";
class Date
{
private:
    int date;
    int month;
    int year;
    string address;
public:
    Date(int d=1,int m=1,int y=2000);
    Date(long);
    ~Date();//destructor
    void set_address(string);
    void Display(void);
};
Date::Date(int d,int m,int y)
{
    date=d;
    month=m;
    year=y;
}
Date::Date(long YMD)
{
    year=int(YMD/10000);
    month=int(((YMD/100)-year*100));
    date=int(YMD-(YMD/100)*100);
}
void Date::set_address(string addr)
{
    address=addr;
}

void Date::Display()
{
    cout<<"The date is:"<<setfill('0')<<setw(2)<<date<<"/"
        <<setfill('0')<<setw(2)<<month<<"/"<<setfill('0')<<setw(4)<<year<<endl;
}
Date::~Date(){}
int main()
{
    Date d1,d2(2,2,20),d3(long(19985647));
    d1.Display();
    d2.Display();
    d3.Display();
}
