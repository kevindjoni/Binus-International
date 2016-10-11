#include <iostream>
using namespace std;

int main()
{
	int oneAcre = 43560;
	int tractOfLand = 391876;
	int acre;
	
	acre = tractOfLand / oneAcre;
	
	cout << "The number of acres in a tract of land\n"
		 << "with 391,876 square feet is "
		 << acre << " acre";
	
	return 0;
}
