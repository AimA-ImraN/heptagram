#include<iostream>
using namespace std;
main()
{
    double megabytes;
    cout << "Enter size in megabytes (MB): ";
    cin >> megabytes;

    long long bits = megabytes * (1024 * 1024 * 8);
    cout<< " MB is equal to " << bits << " bits." <<endl;
}
