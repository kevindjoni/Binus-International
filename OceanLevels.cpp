#include<iostream>
using namespace std;

int main()
{
	float oceanLevelNow;
	float oceanLevel5Years = 5 * 1.5;
	float oceanLevel7Years = 7 * 1.5;
	float oceanLevel10Years = 10 * 1.5;
	
	cout << "The number of millimeters higher than the"
		 << "\ncurrent ocean level in 5 years is: "
		 << oceanLevel5Years << "mm" << "\n\n";
	
	cout << "The number of millimeters higher than the"
		 << "\ncurrent ocean level in 7 years is: "
		 << oceanLevel7Years << "mm" << "\n\n";
		 
	cout << "The number of millimeters higher than the"
		 << "\ncurrent ocean level in 10 years is: "
		 << oceanLevel10Years << "mm";	 	 
	
	return 0;
}
