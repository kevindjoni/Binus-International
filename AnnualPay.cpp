#include<iostream>
using namespace std;

int main()
{
	int payAmount = 2200;
	int payPeriods = 26;
	int annualPay;
	
	annualPay = payAmount * payPeriods;
	
	cout << "The total annual pay received by an employee "
		 << "is $" << annualPay << endl;
	
	return 0;
}
