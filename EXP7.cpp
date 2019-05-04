#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num1, sum = 0;
	
	cout << "Enter a number: ";
	cin >> num1;
	
	for (int i=num1; i>=1; i--){
	sum = sum + i;
	}
	
	cout << "The sum of all whole numbers from 1 to " << num1 << " is: " << sum;
	
	_getch();
	return 0;
}
