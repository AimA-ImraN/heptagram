#include <iostream>
using namespace std;
main()
{
float P;
float I;
float V;
cout<< "VOLTAGE:(volt)" <<endl; 
cin>>V;
cout<<"CURRENT:(ampere)" <<endl;
cin>>I;
P=V*I;
cout<<"power="<<P <<"watts" <<endl;
}