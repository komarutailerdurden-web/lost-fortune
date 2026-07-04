//lost fortune
//personal adventure game
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std:: string;
int main()
{
	const int GOLD_PIECES = 900;
	int adventures, killed, survivors;
	string leader;
	// i am receving information
	cout << "Welcome to lost fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";
	cout << "Enter the number: ";
	cin >> adventures;
	cout << "Enter a number, smaller then first: ";
	cin >> killed;
	survivors = adventures - killed;
	cout << "Enter your last name: ";
	cin >> leader;


	//story 
	cout << "\nA brave group of " << adventures << "set out on a quest";
	cout << "-- in search of the least treasure of the Acient Dwares.";
	cout << "The group  was led by that legendary Rogue, " << leader << ".\n";
	cout << "\nAlong the way, a abnd of muraunding ogres ambushed the party.";
	cout << "All fought bravely under the command of" << leader;
	cout << ", and the orges were defeated. but at cost. ";
	cout << "Of the adventures " << killed << "were vanquished, ";
	cout << "leaving just " << adventures << "in the group.\n";
	cout << "\nThe party was fbout to give up all hope ";
	cout << "But while laying the decesead to rest.";
	cout << "So the adventures split " << GOLD_PIECES <<"gold pieces";
	cout << leader << " held on to the extra" << (GOLD_PIECES % survivors) ;
	cout << "pieces to keep things fair of course.\n ";
	return 0;
}