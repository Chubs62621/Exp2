#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	double B, CC, GU;
	CC = 1.10;

	cout << "Please input unpaid balance. \n";
	cin >> B;
	cout << "\n";
	
	cout << "please input total gallons consumed. \n";
	cin >> GU;
	cout << "\n";
	
	if (B <= 0)
	{
	cout << "your total bill is : ";
	cout << 35 + (CC*GU);
	cout << "\nThank you!";
	}
	else 
	{
	cout << "you still have a balance of" << B << "PHP. \n";
	cout << "\n";
	cout << "please pay your unpaid balance in your next payment. total of :" << 35 + 20 + B + (CC*GU) << "PHP. \n";
	cout << "\nThank you !";
	}
_getch();
return 0;
}
