#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int number;
	
	cout << "Please Enter a number from 1 - 10 - ";
	cin >> number;
	cout << "\n";
	
	for (int i = 1; i<=10; i++){
	cout << number << " x " << i << " = " << (number*i);
	cout << "\n";
	}
_getch();
return 0;	
}
