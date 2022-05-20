#include<iostream>
#include<iomanip>
using namespace std;

const int MAX=5;

class class_date
{
protected:
    int day,month,year;
public:
    class_date(int d=0,int m=0,int y=0);
    void input(void);
    void input_str();
    ~class_date()
    {

    }
};
class_date::class_date(int d,int m,int y)
{
    this->day=d;this->month=m;this->year=y;
}
void class_date::input(void)
{
    cout<<"Enter Date: ";
    cin>>this->day;
    cout<<"Enter Month Number: ";
    cin>>this->month;
    cout<<"Enter Year: ";
    cin>>this->year;
}
void class_date::input_str()
{
    string temp="";
    string main_str="";
    int j=0;
    cout<<"Enter DOD (DD/MM/YYYY): ";
    cin>>main_str;
    for(int i=0;i<main_str.length();i++)
    {
        if(main_str[i]=='/')
        {
            if(j==0)
                day=stoi(temp);
            else
                month=stoi(temp);
            temp="";
            j++;
        }
        else
            temp+=main_str[i];
    }
    year=stoi(temp);
}
class student:private class_date
{
private:
    string reg;
    string name;
    string sub[MAX];
    float marks[MAX];
public:
    student(string name="abc def",string reg = "19BEE0000");
    void take_input();
    void full_display();
    void basic_input();
    void int_date_input();
    ~student()
    {

    }
};
student::student(string name,string reg)
{
    this->name=name;
    this->reg=reg;
}
void student::take_input()
{
    cin.ignore();
    cout<<endl;
    for(int i=0;i<MAX;i++)
    {
        cout<<"Enter Subject "<<i+1<<" name :";
        getline(cin,sub[i]);
        cout<<"Enter Subject "<<i+1<<" marks :";;
        cin>>marks[i];
        cin.ignore();
        cout<<endl;
    }
}
void student::basic_input()
{
    cout<<"Name: ";
    cin.ignore();
    getline(cin,this->name);
    cout<<"Registration Number: ";
    cin>>this->reg;
    cout<<"DOB:"<<endl;
    cout<<"Want to input in (DD/MM/YYYY) format?(Y/N): ";
    char i;
    cin>>i;
    if(i=='Y')
        input_str();
    else
        input();
}
void student::full_display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Registration Number:"<<reg<<endl;
    cout<<"DOB (DD/MM/YYYY):";

    cout<<"The date is:"<<setfill('0')<<setw(2)<<day<<"/"
        <<setfill('0')<<setw(2)<<month<<"/"<<setfill('0')<<setw(4)<<year<<endl;

    for(int i=0;i<MAX;i++)
    {
        cout<<sub[i]<<" : "<<marks[i]<<endl;
    }

}
int main()
{
    student * S =new student();
    S->basic_input();
    S->take_input();
    S->full_display();

}
