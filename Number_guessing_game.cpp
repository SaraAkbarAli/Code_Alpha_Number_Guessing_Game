#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Welcome to the random number generator game" << endl;
	cout << "You have 3 tries to guess the number" << endl;
	cout << "The number is between 1-100" << endl;
	cout << "Good luck" << endl;
	srand(time(0));
	int num= rand() % 100;
	int tries = 3;
	int choice;
	cout << endl << endl;
	while (tries > 0)
	{
		cout << tries << " tries left" << endl;
		cout << "Enter your number " << endl;
		cin >> choice;
		cout << endl << endl;
		if (choice > num)
		{
			cout << "Too high" << endl;
			tries--;
		}
			
		else if (choice < num)
		{
			cout << "Too Low" << endl;
			tries--;
		}
		else
		{
			cout << "YAHOO! You guessed the correct number " << num << endl;
			cout << "Amazing job" << endl;
			break;
		}
	}
	if (tries == 0)
	{
		cout << "Better luck next time" << endl;
	}
}

