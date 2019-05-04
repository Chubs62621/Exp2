#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x = 1;
	cout << "Counting...\n";
	
	for (int i=1;i<=20;i++)
	{
	if (x < 10)
	{
	cout << x++ << ", ";
	}
	else 
	{
	cout << x << ", "; 
	x = x+2;
	}
	}
_getch();
return 0;
}
