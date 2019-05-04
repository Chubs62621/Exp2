#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;

#define PACKAGE_A 995
#define PACKAGE_B 1495
#define PACKAGE_C 1995
#define Additional_A 20
#define Additional_B 10 

int main()  
{
pack:
cout<< "HI! Good day which package would you want to choose? \n";
cout<<"\n"; 
cout<< "Package A: For P995/mo 10 hrs internet access. Additional hours are P20/hr \n"; 
cout<< "Package B: For P1495/mo 20 hrs internet access. Additional hours are P10/hr. \n";
cout<< "Package C: For P1995/mo of unlimited internet access.\n"; 
cout<<"\n";
cout<< "Please choose a package. \n" ;
cout<<"\n";
cout<< "Package: ";
char package;
cin >> package;
switch(package)
{
	case 'A':
	case 'a':
	int hours;
	cout <<"\nHow many hours did you use in this Package?\n";
	cin >> hours;
		
	if (hours <= 10)
	{
	cout<< "\n Your bill is : " << PACKAGE_A;
	cout << "\n Thank you and enjoy surfing! ";
		
	}
	else {
	int A1= (hours - 10) * 20 + PACKAGE_A; 
	cout << "\n Your bill is : " << A1;
	cout << "\n Thank you and enjoy surfing! ";
	}
	break;
	
	case 'B':
	case 'b':
	cout <<"\nHow many hours did you use in this Package?\n" <<'\n';
	cin >> hours;
	if (hours <= 20)
	{
	cout<< "\n Your bill is : " << PACKAGE_B;
	cout << "\n Thank you and enjoy surfing! ";
		
	}
	else {
	int B1= (hours - 20) * 10 + PACKAGE_B; 
	cout << "\n Your bill is : " << B1;
	cout << "\n Thank you and enjoy surfing! ";
	}
	break;
	case 'C':
	case 'c':
		
	cout<< "\n Your bill is : " << PACKAGE_C;
	cout << "\n Thank you and enjoy surfing! ";
		
	break;
	default:
	cout<<"undefined package, choose between A,B,and C\n";
	goto pack;
}
	getch();
	return 0;
}
