#include <iostream>
using namespace std;

int main()
{
	int shareOfStock = 750;
	int pricePerShare = 35;
	float commissionPercentage = 0.02;
	int amountPaidForStock;
	int amountOfCommission;
	int total;
	
	amountPaidForStock = shareOfStock * pricePerShare;
	amountOfCommission = commissionPercentage * 
						 amountPaidForStock;
	total = amountPaidForStock + amountOfCommission;   					 
	
	cout << "The amount paid for the stock alone (without the commission) is $"
		 << amountPaidForStock <<endl;
	cout << "The amount of the commission is $" << amountOfCommission 
		 <<	endl; 
	cout << "The total amount paid (for the stock plus the commission) is $"
		 << total << endl;
	
	return 0;
}
