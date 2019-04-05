#include <iostream>
#include <string>

using namespace std;

//FAIR TRANSACTION
void transaction(int x, int y)
{
	int tempVar = x;
	x = y;
	y = tempVar;
}

//HACKED TRANSACTION
void hackTrans(int& x, int& y)
{
	int tempVar = x;
	x = y;
	y = tempVar;
}

int main()
{
	cout << "Welcome to the 'Checks and Bounces' Client" << endl;

		//User inputs the balances
	int myBalance;
	int cpuBalance;
	cout << "Please enter your balance." << endl;
	cin >> myBalance;
	cout << "Please enter the CPU's balance." << endl;
	cin >> cpuBalance;

		//Current balances are displayed
	cout << "\nOriginal Balances" << endl;
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

		//Post regular transaction, balances are displayed
	cout << "\nRegular Transaction" << endl;
		//Calls transaction function
	transaction(myBalance, cpuBalance);
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

		//Post hacked transaction, balances are displayed
	cout << "\nHacked Transaction" << endl;
		//Calls hacker function
	hackTrans(myBalance, cpuBalance);
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

	cout << "\n";
	system("Pause");
}

