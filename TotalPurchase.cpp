#include<iostream>
using namespace std;

int main()
{
	float priceItem1 = 15.95;
	float priceItem2 = 24.95;
	float priceItem3 = 6.95;
	float priceItem4 = 12.95;
	float priceItem5 = 3.95;
	float salesTaxPercentage = 0.07;
	float salesTax;
	float subtotal;
	float total;
	
	subtotal = priceItem1 + priceItem2 + priceItem3
			 + priceItem4 + priceItem5;
	salesTax = subtotal * salesTaxPercentage;
	total = subtotal + salesTax;		 
	
	cout << "Price of item 1 is: $"
		 << priceItem1 << endl;
	cout << "Price of item 2 is: $"
		 << priceItem2 << endl;
	cout << "Price of item 3 is: $"
		 << priceItem3 << endl;
	cout << "Price of item 4 is: $"
		 << priceItem4 << endl;
	cout << "Price of item 5 is: $"
		 << priceItem5 << endl;	 	 	
	cout << "The subtotal of the sale is: $"
		 << subtotal << endl;
	cout << "The amount of the tax sales is: $"	 
		 << salesTax << endl;
	cout << "The total amount that should be paid is: $"
		 << total << endl; 
	
	return 0;
}
