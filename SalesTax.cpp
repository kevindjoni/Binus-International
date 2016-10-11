#include<iostream>
using namespace std;

int main()
{
	int salesTax = 95;
	double stateTax = 0.04;
	double countyTax = 0.02;
	double addition1;
	double addition2;
	double total;
	
	addition1 = salesTax * stateTax;
	addition2 = salesTax * countyTax;
	total = salesTax + addition1 + addition2;
	
	cout << "The total sum of money that is needed to be paid is $" 
		 << total << endl;
	
	return 0;
}
