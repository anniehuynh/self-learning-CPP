/*Write a program that asks user for two integers, calculates their sum and prints it on screen. After printing the program shuts down.

Tip:

Program is very similar to the example in the chapter. There are many ways to write this program but you will probably need two variables. You will also need the addition operator +.

Example print:

Type the first number: 3

Type the second number: 18

Sum of the numbers is: 21
*/

// solution
#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	int sum;
	
	cout << "Type the first number:";
	cin >> number1;
	cout << "Type the second number:";
	cin >> number2;
	sum = number1 + number2;
	cout << "Sum of the numbers is " << sum << endl;
}
