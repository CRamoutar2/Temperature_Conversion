//Name: Chethram Ramoutar
//Email: Chethram.Ramoutar79@myhunter.cuny.edu
//Date: November 30th, 2019
//This program convers fahrenheit to celsius
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	float fahrenheit, celsius;
	cout << "Please give me the temp in fahrenheit: "; //user input
	cin >> fahrenheit;
	celsius = (fahrenheit - 32.0) * (5.0 / 9.0); //math to convert
	
	cout << celsius; //output
	return 0;
}