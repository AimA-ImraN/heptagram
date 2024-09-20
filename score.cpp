#include <iostream>
using namespace std;
main()
{
    int wins, draws, losses;
    int totalscore;
    char teamname;
cout<<"name of cricket team";
cin>>teamname;
cout<< "Enter the number of wins: " <<endl;
cin>>wins;
cout<< "Enter the number of draws: "<<endl;
cin>>draws;
cout<< "Enter the number of losses:"<<endl;
cin>>losses;
totalscore = (wins * 3) + (draws * 2) + (losses * 0);
cout << "total score of the team is" << totalscore;

}
