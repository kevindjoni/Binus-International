#include <iostream>
using namespace std;

int main()
{
	float gallon = 20;
	float averageDisInTownPerGallon = 23.5;
	float averageDisInHighwayPerGallon = 28.9;
	float distanceInTown;
	float distanceInHighway;
	
	distanceInTown = gallon * averageDisInTownPerGallon;
	distanceInHighway = gallon * averageDisInHighwayPerGallon;
	
	cout << "The distance the car can travel "
		 << "on one tank of gas when driven\n"
		 << "in town is " << distanceInTown 
		 << " miles" << "\n\n";
	cout << "The distance the car can travel "
		 << "on one tank of gas when driven\n"
		 << "in highway is " << distanceInHighway 
		 << " miles" << endl;
	
	return 0;
}
