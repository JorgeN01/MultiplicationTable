// Lab8-2.cpp - displays a multiplication table 
//Created by Nicolas Martinez Galaviz 5/10/2017

#include <iostream>

using namespace std;

int main()
{
// declare Variables 

	int multiplicand  = 0;

	int product = 0;

	cout << "Multiplicand (negative number to end): ";
	cin >> multiplicand;

	while (multiplicand >=0)
	{
	for (int multiplier =1; multiplier <21; multiplier += 1)
		{
			product = multiplicand * multiplier;
			cout<< multiplicand << "*"
				<< multiplier   <<	"=" 
				<< product      << endl;

			// end for 
		}
		
		cout<< endl;
		cout<< " Multiplicand (Negative number to end): ";
		cin>> multiplicand;
		
	} // end wuhile 

	system("pause");
	return 0;
}    // end main 