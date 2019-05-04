#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	double V,z;
	z = 2.5;
	
	cout << "Input the value of X \n";
	cin >> x;
	
	cout << "Input the value of Y \n";
	cin >> y;
	
	if (x > 0 && x < 3)  
	{
	switch (x)
	{case 1:
	if ( y > 1 && y < 5 )
	{   
	V = x*y*z;
	cout << "\t V = ";
	cout << V;
	}		
	else
	{
	V = ((x + y) / z);
	cout << "\t V = ";
	cout << V;
	}
	break;
	case 2:
	if (y <= 5)
	{
	V = (x - (sqrt( y + z)));
	cout << "\t V = ";
	cout << V;
	}
	else
	{	
	V = ((x - y) / z );
	cout << "\t V = ";
	cout << V;
	}
	break;
	}	
	}
	else 
	{V = x + y + z;
	cout << "\t V = ";
	cout << V;
	}
	getch();
	return 0;

}
