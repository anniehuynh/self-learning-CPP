/*Write a program that asks user for amount of dollars and converts them to euros. In the end the program prints the amount of euros on screen. The exchange rate for euros is 0.727802. Use variables of the type double.


Example output:
How much dollars do you want to exchange:10
Amount in euros: 7.27802
The output of the program must be exactly the same as the example output (the most strict comparison level)*/

//solution
#include <iostream>
using namespace std;

int main()
{
	float dollars;
	float euros;
	float rate = 0.727802;
	
	cout << "How much dollars do you want to exchange:";
	cin >> dollars;
	euros = dollars * rate;
	cout << "Amount in euros: " << euros << endl;
}
