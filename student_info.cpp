#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

    char name[20];
    char RegNo[9];
    int Mark[5];
    char Grade[5];
    int sum =0;
    int total=0;
    int i=0;


    cout<<"Enter the name of student : ";cin>>name;
    cout<<"Enter the Regiser Number of the student : ";cin>>RegNo;
    i=1;
    while(i<=5)
    {
        cout<<"Enter the "<<i<<"th mark of "<<name<<"  :";
        cin>>Mark[i-1];
        total += Mark[i-1];
        switch(Mark[i-1]/10)
        {
        case 10:
        case 9:
            Grade[i-1] = 'S';
            break;
        case 8:
            Grade[i-1] = 'A';
            break;
        case 7:
            Grade[i-1] = 'B';
            break;
        case 6:
            Grade[i-1] = 'C';
            break;
        case 5:
            Grade[i-1] = 'D';
            break;
        default:
            Grade[i-1] = 'F';
        }
        i++;

    }

    //display the information

    cout<<"Name of the Student : "<<name<<"\t\t\t"<<"Register Number : "<<RegNo<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;

    i=0;
    while(i<5)
    {
        cout<<"The Mark "<<i+1<<"  :"<<setw(3)<<Mark[i]<<"\t\t\t";
        cout<<"Grade  : "<<Grade[i]<<endl;
        i++;
    }

    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"The Total Mark is :"<<total;

    return 0;

}