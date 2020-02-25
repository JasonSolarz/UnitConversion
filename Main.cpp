#include <iostream>;
using namespace std;

//Write a function that converts from the U.S. 
//measure of automobile fuel economy of miles-per-gallon to 
//the measure of kilometers-per-liter used in some other countries, 
//and use that function in a program.

double UnitConverter(double MPG)
{
	double KPL = MPG * 0.425144;
	return KPL;
}

void DisplayConversion(double MPG, double KPL)
{
	cout << endl << MPG << " miles-per-gallon is equivalent to " << KPL << " kilometers-per-liter" << endl;
}

void AskUserMPG() 
{
	double MPG;
	cout << "Please enter your vehicles MPG: ";
	cin >> MPG;
	DisplayConversion(MPG, UnitConverter(MPG));
}

int main(int argc, char* argv[]) {

	AskUserMPG();
	return 0;
}

