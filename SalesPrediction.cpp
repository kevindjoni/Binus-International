#include<iostream>
using namespace std;

int main()
{
	double percentage = 0.58;
	double sales = 8.6e+6;
	double prediction;
	
	prediction = sales * percentage;
	
	cout << "In this year, the company will generates $"
		 << prediction << endl;

	return 0;	
}
