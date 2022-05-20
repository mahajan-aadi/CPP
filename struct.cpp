#include<iostream>
#include<string>
using namespace std;


//struct

struct student
{
    string name;
    float mark[5];
    char grade[5];
    char result;

    void input()
    {
        cout<<"Enter Name :";cin.ignore();getline(cin,name);
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks "<<i+1<<" :";cin>>mark[i];
        }
    }
    void process()
    {
        result='P';
        for(int i=0;i<5;i++)
        {
            if(mark[i]>90)
                grade[i]='S';
            else if(mark[i]>80)
                grade[i]='A';
            else if(mark[i]>70)
                grade[i]='B';
            else
            {
               grade[i]='F';
               result='F';
            }
        }
    }
    void output();
}S1,S2;

void student::output()
{
    cout<<"Name    :"<<name<<endl;
    cout<<"Marks             Grade"<<endl;
    cout<<"_______________________"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<mark[i]<<"            "<<grade[i]<<endl;
    }
    cout<<"_______________________"<<endl;
    cout<<"Result  :"<<result<<endl;
}


//class
/*

class student
{
private:

    string name;
    float mark[5];
    char grade[5];
    char result;

public:
    void input()
    {
        cout<<"Enter Name :";cin.ignore();getline(cin,name);
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks "<<i+1<<" :";cin>>mark[i];
        }
    }
    void process()
    {
        result='P';
        for(int i=0;i<5;i++)
        {
            if(mark[i]>90)
                grade[i]='S';
            else if(mark[i]>80)
                grade[i]='A';
            else if(mark[i]>70)
                grade[i]='B';
            else
            {
               grade[i]='F';
               result='F';
            }
        }
    }
    void output();
}S1,S2;

void student::output()
{
    cout<<"Name    :"<<name<<endl;
    cout<<"Marks             Grade"<<endl;
    cout<<"_______________________"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<mark[i]<<"            "<<grade[i]<<endl;
    }
    cout<<"_______________________"<<endl;
    cout<<"Result  :"<<result<<endl;
}
*/


int main()
{
    cout<<"Student 1"<<endl;
    S1.input();
    S1.process();

 /*   cout<<endl;
    cout<<"Student 2"<<endl;
    S2.input();
    S2.process();*/

    cout<<endl;
    cout<<"Student 1 information"<<endl;
    S1.output();

    /*student * S1_p;
    S1_p=&S1;
    cout<<endl;
    cout<<"Student 1 information"<<endl;
    S1_p->output();*/

 /*   cout<<endl;
    cout<<"Student 2 information"<<endl;
    S2.output();*/
}
