#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int row, col;
	
	cout << "How many rows? ";
	cin >> row;
	cout  << "How many columns? ";
	cin >> col;
	cout << "\n\n";
	cout << "A box with " << row << " rows & " << col << " columns.\n\n"; 
	
	
	for (int i = 0; i<row; i++){
	for (int j = 0; j<col; j++){
	cout << "*";
	}
	cout << "\n";
	}
	
	_getch();
	return 0;
}
