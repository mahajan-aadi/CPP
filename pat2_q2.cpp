#include<iostream>
using namespace std;

float matrix_data[3][3];
float array_data[9];
float matrix_sum[3];
int main()
{
    for(int i=0;i<9;i++)
    {
        cout<<"Enter data"<<i+1<<":";
        cin>>array_data[i];
    }
    for(int i=0;i<9;i++)
    {
        matrix_data[(i/3)][(i%3)]=array_data[i];
    }
    for(int i=0;i<3;i++)
    {
        matrix_sum[i]=matrix_data[0][i]+matrix_data[1][i]+matrix_data[2][i];
    }
    cout<<"matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix_data[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"sum"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<matrix_sum[i]<<"\t";
    }
    return 0;
}
