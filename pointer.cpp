#include<iostream>
using namespace std;
void swap(int data1,int data2)
{
    cout<<"child"<<endl;
    cout<<"data1:"<<data1<<"\t data2"<<data2<<endl;
    int temp=data1;
    data1=data2;
    data2=temp;
    cout<<"data1:"<<data1<<"\t data2"<<data2<<endl;
    cout<<"child over"<<endl;
}
void swap_correct(int *data1,int *data2)
{
    cout<<"child"<<endl;
    cout<<"data1:"<<*data1<<"\t data2"<<*data2<<endl;
    int temp=*data1;
    *data1=*data2;
    *data2=temp;
    cout<<"data1:"<<*data1<<"\t data2"<<*data2<<endl;
    cout<<"child over"<<endl;
}
void sorting(int arr[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
        for(j=0;j<9;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
}
void sorting_2(int * arr)
{
    int i,j,temp;
    for(i=0;i<10;i++)
        for(j=0;j<9;j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
}

int main()
{
/*    int age=100;
    int *age_ptr;
    age_ptr=&age;
    int **age_ageprt=&age_ptr;
    cout<<&age<<endl;
    cout<<sizeof(age_ptr)<<endl;
    cout<<sizeof(age_ageprt)<<endl;
    int pag=23;
    age_ptr=&pag;
    cout<<age<<endl;
    cout<<*age_ptr<<endl;

    int data;
    int &ref_data=data;//ref_data=data
    data=51;
    cout<<data<<endl<<ref_data<<endl;
*/
/*    double arr[]={2,4,6,8,10};
    double *pntr=&arr[0];
    for (int i=0;i<5;i++)
    {
        cout<<"element:"<<*(pntr+i)<<" and address is:"<<(pntr+i)<<endl;
        cout<<"element:"<<*(arr+i)<<" and address is:"<<(arr+i)<<endl<<endl;
    }
*/
/*    int data1,data2,*newptr1,*newptr2;;

    data1=rand()%100;
    data2=rand()%100;
    newptr1=&data1;
    newptr2=&data2;*/
 /*   cout<<"sum:"<<*newptr1+*newptr2<<endl;
    //memory increment look into it answer wrong
    cout<<"preincrement:"<<++*newptr1<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"posttincrement:"<<*newptr1++<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"predecrement:"<<--*newptr1<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"postincrement:"<<*newptr1--<<" after incremenmt:"<<*newptr1<<endl<<endl;

    //data increment look into it answer wrong
    cout<<"preincrement:"<<++(*newptr1)<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"posttincrement:"<<(*newptr1)++<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"predecrement:"<<--(*newptr1)<<" after incremenmt:"<<*newptr1<<endl;
    cout<<"postincrement:"<<(*newptr1)--<<" after incremenmt:"<<*newptr1<<endl;*/

/*    cout<<"data1:"<<data1<<"\t data2"<<data2<<endl;
    swap_correct(&data1,&data2);
    cout<<"data1:"<<data1<<"\t data2"<<data2<<endl;*/


    int data=10;
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i]=rand()%100;
    for(int i=0;i<10;i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
    sorting_2(arr);

    for(int i=0;i<10;i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
   /* int *arr_ptr=new int[10];
    for(int i=0;i<10;i++)
        *(arr_ptr+i)=rand()%100;
    //arr_ptr=&arr[0];//arr_ptr=arr;
    cout<<endl<<*arr_ptr;
    delete[] arr_ptr;
    cout<<endl<<*arr_ptr<<endl;
    for(int i=0;i<10;i++)
        cout<<*(arr_ptr+i)<<"\t";*/
}
