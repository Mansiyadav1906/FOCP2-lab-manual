#include<iostream>
using namespace std;
int main()
{
   // std::cout<<"hello"<< std::endl<<"world""\n";
    int a=10;
    float f=14.78;
    //char c='z';
    //std::cout<<"the value of a="<<a<<"\n""the value og f="<<f;
    //std::cout<<a;
    //std::cout<<f;
    //std::cout<<"\n""the value of character="<<c;
    //std::cout<<"enter a=";
    string name;
    cout<<"enter value of a,f,name";
    cin>>a;
    cin>>f;
    getline(cin,name);
    cout<<"\n a= "<<a<<"\n f="<<f<<"\n name ="<<name;
    return 0;
}