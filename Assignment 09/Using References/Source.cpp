#include <iostream>
#include <string>

using namespace std;

void transaction(int x, int y);
void hackTrans(int& x, int& y);


int main()
{
	cout << "Welcome to the 'Checks and Bounces' Client" << endl;
	//Current balances
	int myBalance;
	int cpuBalance;
	cout << "Please enter your balance." << endl;
	cin >> myBalance;
	cout << "Please enter the CPU's balance." << endl;
	cin >> cpuBalance;

	cout << "\nOriginal Balances" << endl;
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

	cout << "\nRegular Transaction" << endl;
	transaction(myBalance, cpuBalance);
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

	cout << "\nHacked Transaction" << endl;
	hackTrans(myBalance, cpuBalance);
	cout << "User: " << myBalance << endl;
	cout << "CPU: " << cpuBalance << endl;

	cout << "\n";
	system("Pause");
}

void transaction(int x, int y)
{
	int tempVar = x;
	x = y;
	y = tempVar;
}

void hackTrans(int& x, int& y)
{
	int tempVar = x;
	x = y;
	y = tempVar;
}