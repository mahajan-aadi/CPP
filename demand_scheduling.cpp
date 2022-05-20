#include<iostream>
using namespace std;

float load[]={2,7,8};
float time[]={2,3,1};

float max_load=10;
float max_time=3;

sorting()
{
    for(int i=0;i<sizeof(load)/sizeof(load[0]);i++)
    {
        for(int j=i;j<sizeof(load)/sizeof(load[0]);j++)
        {
            if(load[i]<load[j])
            {
                float temp=load[i];
                float temp1=time[i];

                load[i]=load[j];
                time[i]=time[j];

                load[j]=temp;
                time[j]=temp1;
            }
        }
    }
}

void sch()
{
    int n=0;
    float sum=0;
    while(sum<=max_load && n<(sizeof(load)/sizeof(load[0])))
    {
        if(time[n]>0)
            sum+=load[n];
        n++;
    }
    if(sum>max_load)
        n--;

    float min_time=999999;
    for(int i=0;i<n;i++)
        if(time[i]<min_time && time[i]>0)
            min_time=time[i];

    if(min_time>max_time)
        min_time=max_time;

    cout<<"load used:  ";
    for(int i=0;i<n;i++)
        if(time[i]>0)
            cout<<load[i]<<"  ";
    cout<<endl<<"For time:"<<min_time<<endl;

    max_time-=min_time;

    for(int i=0;i<n;i++)
        if(time[i]>0)
            time[i]-=min_time;

    cout<<endl<<endl<<endl;
    for(int i=0;i<sizeof(load)/sizeof(load[0]);i++)
        cout<<load[i]<<"   ";
    cout<<endl;
    for(int i=0;i<sizeof(load)/sizeof(load[0]);i++)
        cout<<time[i]<<"   ";
    cout<<endl<<endl<<endl;

}
int main()
{
    sorting();

    while(max_time>0)
        sch();
}
