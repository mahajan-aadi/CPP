#include <iostream>
using namespace std;
int main()
{
    enum Result{Pass=1,Fail=0};

    int i=0;
    int marks=200;
    char grade='z';
    Result result = Pass;

    goto data_sum;
 marks_part:

    cout<<"Enter marks: ";cin>>marks;
    if(marks>90)
        grade='S';
    else if(marks>80)
        grade='A';
    else if(marks>70)
        grade='B';
    else
    {
        grade='F';
        result=Fail;
    }

    cout<<"The marks are:"<<marks<<" and the grade is:"<<grade<<endl;
    cout<<"Student is "<<result;
    goto end;

data_sum:

    int data1,data2,sum_data;
    cout<<"Enter data 1:";cin>>data1;
    cout<<"Enter data 2:";cin>>data2;

    sum_data=data1+data2;
    cout<<"sum of data is: "<<sum_data<<endl;
    goto marks_part;
end: return 0;
}
