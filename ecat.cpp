#include <iostream>
using namespace std;
 main() 
{
    string name;
    double matric, intermediate, ecat;
    cout << "Enter student name: ";
    cin>> name;
    cout << "Enter matric marks (out of 1100): ";
    cin >> matric;
    cout << "Enter intermediate marks (out of 550): ";
    cin >> intermediate;
    cout << "Enter Ecat marks (out of 400): ";
    cin >> ecat;
    double aggregate = ((matric / 1100) * 100 * 0.10) +
                        ((intermediate / 550) * 100 * 0.40) +
                        ((ecat / 400) * 100 * 0.50);
cout << "\nStudent Name: " << name << std::endl;
cout << "Aggregate Score: " << aggregate << "%" << std::endl;
}



