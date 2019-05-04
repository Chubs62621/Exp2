#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A,B,C,X;
	
	A = 0;
	B = 1;
	

	cout << "Fibonacci sequence: \n";
	for (X = 1; X <=21; X++)
	{
	cout << C << ", ";
	C = A + B;
	A = B;
	B = C;
	}
_getch();
return 0;
}
