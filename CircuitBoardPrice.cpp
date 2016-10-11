#include <iostream>
using namespace std;

int main()
{
	float finalSellingPercentage = 1.35;
	float sellingPrice = 14.95;
	float finalSellingPrice;
	
	finalSellingPrice = finalSellingPercentage * sellingPrice;
	
	cout << "The final selling price of the circuit board\n"
		 << "is $" << finalSellingPrice << endl;
	
	return 0;
}
