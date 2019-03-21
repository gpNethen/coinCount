#include <iostream>
using namespace std;

int main()
{
	float total, qtotal, dtotal, ntotal, ptotal;
	int quarter, dime, nickel, penny, coin;
	
	cout << "Enter dollar amount" << endl;
	cin >> total;
	
	quarter = total / .25;
	qtotal = quarter * .25;
	total -= qtotal;
	
	cout << total << " " << qtotal << " " << quarter << endl;
	
	dime = total / .1;
	dtotal = dime * .1;
	total -= dtotal;
	
	cout << total << " " << dtotal << " " << dime << endl;
	
	nickel = total / .05;
	ntotal = nickel * .05;
	total -= ntotal;
	
	cout << total << " " << ntotal << " " << nickel << endl;
	
	penny = total / .01;
	ptotal = penny * .01;
	total -= ptotal;
	
	cout << total << " " << ptotal << " " << penny << endl;
	
	coin = quarter + dime + nickel + penny;
	
	cout << quarter << " quarters" << endl;
	cout << dime << " dimes" << endl;
	cout << nickel << " nickels" << endl;
	cout << penny << " pennies" << endl;
	cout << "-------------------" << endl;
	cout << coin << " coins total " << endl;
	
	return 0;
}
