/*
A Password Generator That Creates A Password Of Any Size Provided By The User And Save That Password To A File
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string ThePassword;
	int size = -1;
	srand(time(0));

//introduction and what the program is
	cout << "This is a password generator." << endl;
	cout << "What it can do is: \n"
	<< "1. Make a random password depening on the size that the user wants. \n"
	<< "2. Save that password to a file" << endl;
	cout << endl;
 
 //asking the size the user for the size they want
	cout << "What size would you like your password to be? "<< endl;
	cin >> size;

	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			ThePassword[i] = rand() % 92 + 33;
			cout << ThePassword[i];
		}
		cout << endl;
	}

	ofstream Passwords;
	Passwords.open ("PasswordsVault.txt", ios::app);
	if (Passwords)
	{
		for (int i = 0; i < size; i++)
		{
			Passwords << ThePassword[i];
		}
		Passwords << endl;
		Passwords.close();
	}

	return 0;
}