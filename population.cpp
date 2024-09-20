#include <iostream>
using namespace std;
main()
{
int current_population;
int birthrate;
int population_in_3decades;
cout<< "current world population:" <<endl; 
cin>> current_population;
cout<<"birth rate per month";
cin>>birthrate;
population_in_3decades= (birthrate*12*30)+current_population;
cout<<"population  in three decades="<<population_in_3decades <<endl;
}