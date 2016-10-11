#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Kevin Djoni";
	string address = "5th Avenue Street";
	string city = "Los Angeles";
	string state = "California";
	int ZIPcode = 90001;
	string telephone = "+32378068826";
	string collegeMajor = "Computer Science";
	
	cout << name << "\n" << address << ", " << city 
		 << ", " << state << ", " << ZIPcode << "\n"
		 << telephone << "\n" << collegeMajor
		 << endl; 
	
	return 0;
}
