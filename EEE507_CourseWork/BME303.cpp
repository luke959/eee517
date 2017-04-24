#include "BME303.h"
#include <iostream>
using namespace std;


BME303::BME303() {

	dc = 0.0;
	dm = 0.0;
	Rf = 0.0;
	l = 0.0;
	c = 0.0;
	e = 0.0;
	Abs = 0.0;
	f = 0.0;
	i = 0.0;
	o = 0.0;
	n = 0.0;
	m = 0.0;
	rm = 0.0;
}

void BME303::selectnow()
{
	int option; // user's entered option will be saved in this variable

	do //do-while loop starts here.that display menu again and again until user select to exit program
	{
		//Displaying Options for the menu
		cout << "Welcome to BME303 Cheat Sheet \n";
		cout << "\n";
		cout << "Please Select Topic... \n";
		cout << "\n";
		cout << "1. Chromatography \n";
		cout << "2. Spectroscopy \n";
		cout << "3. Light Microscopy \n";
		cout << "4. Basic Analytical Science \n";
		cout << "\n";
		//Prompting user to enter an option according to menu
		cin >> option;  // taking option value as input and saving in variable "option"

		if (option == 1) // Checking if user selected option 1
		{
			cout << "\n" << endl;
			cout << "What's your distance moved by compounds?" << endl;
			double dc;
			cin >> dc;
			cout << "What's your distance moved by mobile phase?" << endl;
			double dm;
			cin >> dm;


			double Rf = dc / dm;

			cout << "Your Retention Factor is " << Rf << endl;
			cout << "\n";
		}

		else if (option == 2) // Checking if user selected option 2
		{
			cout << "\n" << endl;
			cout << "What's your length?" << endl;
			double l;
			cin >> l;
			cout << "What's your concentration?" << endl;
			double c;
			cin >> c;
			cout << "What's your molar absorptivity?" << endl;
			double e;
			cin >> e;

			double Abs = e * l * c;

			cout << "Your Absorbance is " << Abs << endl;
			cout << "\n";
		}


		else if (option == 3) // Checking if user selected option 3
		{
			cout << "\n" << endl;
			cout << "What's your Image Length?" << endl;
			double i;
			cin >> i;
			cout << "What's your Optical Length?" << endl;
			double o;
			cin >> o;

			double f = (1 / (1 / i) + (1 / o));

			cout << "Your Focal Length is " << f << endl;
			cout << "\n";
		}
		else if (option == 4) // Checking if user selected option 4
		{
			cout << "\n" << endl;
			cout << "What's your Mass (grams)?" << endl;
			double m;
			cin >> m;
			cout << "What's your Relative Molecular Mass?" << endl;
			double rm;
			cin >> rm;

			double n = m / rm;

			cout << "The Number of Moles is " << n << endl;
			cout << "\n";
		}

		else //if user has entered invalid choice (other than 1,2,3 or 4)
		{
			//Displaying error message
			cout << "\n" << endl;
			cout << "Invalid Option entered \n" << endl;
		}

	} while (option != 4);  //condition of do-while loop

}

int c_main(void);

int c_main(void) {

	BME303 object3;
	object3.selectnow();
	return (0);
}