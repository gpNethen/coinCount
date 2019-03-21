#include <iostream>
using namespace std;

int main()
{
	float total;
	int intTotal;
	int coinCount=0;
	
	cout << "This program accepts USD money notation and converts it into corresponding coins" << endl;
	cout << "Enter dollar amount" << endl;
	cin >> total;
	intTotal = total*100;
	
	
	cout << intTotal/25 << " quarters" << endl;
	coinCount += intTotal/25;
	intTotal = intTotal%25;
	cout << intTotal/10 << " dimes" << endl;
	coinCount += intTotal/10;
	intTotal = intTotal%10;
	cout << intTotal/5 << " nickels" << endl;
	coinCount += intTotal/5;
	intTotal = intTotal%5;
	cout << intTotal/1 << " pennies" << endl;
	coinCount += intTotal/1;
	cout << "-------------------" << endl;
	cout << coinCount << " coins total " << endl;
	
	return 0;
}
