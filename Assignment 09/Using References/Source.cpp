#include <iostream>
#include <string>

using namespace std;

int main()
{
		//Initialized variable
	int myScore = 100;
		//Nickname reference
	int& royScore = myScore;


	cout << "The variable myScore has a value of " << royScore << "." << endl;
	system("pause");
}