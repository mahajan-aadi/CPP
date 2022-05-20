#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    /*
    //cstring
    char first[20],second[20], third[40];
    //char mina[20]={'V','K'};
    cout<<"Enter first name:";
    cin.getline(first,20);
    cout<<"Enter second name:";
    cin.getline(second,20);
    int i=0;
    while(first[i]!='\0') //or NULL
    {
        cout<<i;
        i++;
    }

    //copy name easy
    //strcpy(third,first);

    //concat
    strcpy(third,first);
    strcat(third," ");
    strcat(third,second);
    cout<<endl<<third;
    //length
    cout<<endl<<strlen(third);*/

    //c++ string
    string first,second, third;
    //string mina={"fvdcsxaz"};
    cout<<"Enter first name:";
    getline(cin,first);
    cout<<"Enter second name:";
    getline(cin,second);
    third=first+" " +second;
    cout<<endl<<third;
    cout<<endl<<third.size();
}
