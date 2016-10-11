#include<iostream>
using namespace std;

int main()
{
	int gallonOfGasoline = 15;
	int milesTravelled = 375;
	int MPG;
	
	MPG = milesTravelled / gallonOfGasoline;
	
	cout << "The number of miles the car can get per gallon is "
	 	 << MPG << " miles";
	
	return 0;
}
