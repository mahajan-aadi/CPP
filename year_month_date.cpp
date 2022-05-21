/*#include<iostream>
#include<iomanip>
using namespace std;

class data
{
private:
    int secs;
    int mins;
    int hours;
    int day;
    int month;
    int year;
public:
    data(int s=0,int m=0,int h=0,int d=0,int mo=0,int y=0);
    void get_data(int s,int m,int h,int d,int mo,int y);
    void show_data();
    long convertdate();
    long converttime();
};
data::data(int s,int m,int h,int d,int mo,int y)
{
     secs=s;
     mins=m;
     hours=h;
     day=d;
     month=mo;
     year=y;
}
long data::convertdate()
{
    cout<<"The date is:"<<setfill('0')<<setw(2)<<day<<"/"
    <<setfill('0')<<setw(2)<<month<<"/"<<setfill('0')<<setw(4)<<year<<endl;
    long temp=year*10000+month*100+day;
    return temp;
}
long data::converttime()
{
    cout<<"The time is:"<<setfill('0')<<setw(2)<<hours<<":"
    <<setfill('0')<<setw(2)<<mins<<":"<<setfill('0')<<setw(2)<<secs<<endl;
    long temp=hours*10000+mins*100+secs;
    return temp;
}
void data::show_data()
{
    cout<<"The data is:"<<setfill('0')<<setw(2)<<day<<"/"
    <<setfill('0')<<setw(2)<<month<<"/"<<setfill('0')<<setw(4)<<year<<" "
    <<setfill('0')<<setw(2)<<hours<<":"
    <<setfill('0')<<setw(2)<<mins<<":"<<setfill('0')<<setw(2)<<secs<<endl;;
}
void data::get_data(int s,int m,int h,int d,int mo,int y)
{
     secs=s;
     mins=m;
     hours=h;
     day=d;
     month=mo;
     year=y;
}
int main()
{
    data d1;
    d1.get_data(20,10,2,1,3,1998);
    d1.show_data();
    long date=d1.convertdate();
    cout<<date<<endl;
    long time=d1.converttime();
    cout<<time<<endl;
}
*/
#include <iostream>
using namespace std;

int main()
{
    int i=0,j=0;
    int arr[6][10];
    while(i<6)
    {
        j=0;
        while(j<10)
        {
            cout<<i<<" "<<j<<" :";
            cin>>arr[i][j];
            j++;
        }
        i++;
    }
    return 0;
}


