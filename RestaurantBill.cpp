#include<iostream>
using namespace std;

int main()
{
	float mealCharge = 88.67;
	double taxPercentage = 0.0675;
	float tax;
	float tipPercentage = 0.2;
	float tip;
	float total;
	float total1;
	float total2;
	
	tax = mealCharge * taxPercentage;
	total1 = mealCharge + tax;
	tip = tipPercentage * total1;
	total2 = tip + total1;
	
	cout << "Meal cost is $" << mealCharge << endl;
	cout << "Tax amount is $" << tax << endl;
	cout << "Tip is $" << tip << endl;
	cout << "The total amount of money that should be paid is $"
		 << total2;
		 
	return 0;
}
