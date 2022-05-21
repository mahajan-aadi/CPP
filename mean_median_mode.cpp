#include <iostream>
#include <iomanip>

using namespace std;

int low_bound=0;
int upper_bound=0;
int height=0;
int n=0;
float cf[20];
int data[20];
int main()
{
    cout<<"Enter Lower Bound: ";cin>>low_bound;
    cout<<"Enter Upper Bound: ";cin>>upper_bound;
    cout<<"Enter Height: ";cin>>height;

    int temp,temp_1;
    int temp2=0;
    for(temp=low_bound;temp<upper_bound;temp+=height)
    {
        temp_1=temp+height;
        if((temp+height)>upper_bound)
            temp_1=upper_bound;
        cout<<"Enter data within "<<temp<<" and "<<temp_1<<":";
        cin>>data[n];
        cf[n]=temp2+data[n];
        temp2=cf[n];
        n++;
    }
    float N=cf[n-1]/2;
    int main_f;
    for(int i=0;i<n;i++)
    {
        if(cf[i]>N)
        {
            main_f=i;
            break;
        }
    }
    //formula = l + [(N/2−c)/f] × h
    float median=(float)low_bound+(float)(height*main_f)+(float)(((N)-(cf[main_f-1]))*(float)height/(float)data[main_f]);
    cout<<"Median is :"<<median;
}
