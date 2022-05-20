#include <iostream>
#include <bitset>
using namespace std;
/*int main()
{
    int decima,octa,hexa,bina;
    decima=15;
    hexa=0xf;
    octa=017;
    bina=0b1111;
    cout<<"decimal:"<<decima<<"octa:"<<octa<<"hexa:"<<hexa<<"binary:"<<bina;
   // cout<<endl<<setbit<4>:bina;
    cout<<endl<<hex<<hexa;
    cout<<endl<<oct<<octa;
    cout<<endl<<dec<<decima;
}*/
/*#include <iomanip>
int main()
{
    int dec,octa,hexa,bina;
    dec=15;
    hexa=0xf;
    octa=017;
    bina=0b1111;
    cout<<"decimal:"<<dec<<"octa:"<<setw(4)<<octa<<"hexa:"<<setw(6)<<setfill('&')<<hexa<<"binary:"<<bina;
}*/
#include <iomanip>
#include <cmath>
int main()
{
    float nu=-3.14157896;
    cout<<"no precision:"<<nu<<endl;
    cout<<setprecision(2);
    cout<<"prescision:"<<nu<<endl;
    cout<<setprecision(6);
    cout<<"prescision:"<<nu<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"constant prescision after decimal:"<<nu<<endl;
    //<bits/stdc++.h> or cmath
    cout<<ceil(nu)<<endl;
    cout<<floor(nu)<<endl;
    cout<<trunc(nu)<<endl;
    cout<<round(nu)<<endl;
}
