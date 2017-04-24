//need my Java comments at start!!
/*@todo mine is getting stuck in the loop. could i declare my inputs seperatly make loop simplier... */

#include "MEC121.h"

#include <iostream>
using namespace std;

//constructor 
MEC121::MEC121()
{
	Force = 0.0;
	Mass = 0.0;
	Acc = 0.0;
	Work = 0.0;
	Dist = 0.0;
	Power = 0.0;
	Vel = 0.0;

}

void MEC121::User_select()

{

	// want it to execute at least once  
	do
	{
		cout << "Welcome to the Mechanical Technology (MEC121) 'tutorial' (Cheatsheet)." << '\n'
			<< "Select the appropriate chapter title" << '\n'
			<< "1 - A Force to be reckoned with" << '\n'
			<< "2 - Work done" << '\n'
			<< "3 - Power" << endl;

		//need to stop it running if char/string entered, and fix so only an interger can be entered

		cin >> Selection;


		switch (Selection) {

		case 1:
			cout << "You have selected A Force to be reckoned with, is this correct? Y/N " << '\n';
			M_repeat = false;

			//I have added the Yes/No option incase wrong selection was made. rather than having multiple statements I have used
			//the not equal function, so if anything other than Y is entered it will return to main menu.
			//fully aware of the limitations, such as what if an integer is entered. working on this.
			//wanted a different way than how others within group had executed the same outcome
			//  added the &&  so that if user enters capital or non caps 'y' the program can follow the user

			cin >> YesNo;
			if (YesNo != 'Y' && YesNo != 'y') {
				cout << "Returned to main menu" << '\n';
				break;
			}

			MEC121::Force_Eq();
			break;

		case 2:
			cout << "You have selected Work done is this correct? Y/N" << '\n';
			M_repeat = false;
			cin >> YesNo;
			if (YesNo != 'Y' && YesNo != 'y') {
				cout << "Returned to main menu" << '\n';
				break;
			}
			MEC121::Work_Eq();
			break;

		case 3:
			cout << "You have selected Power is this correct? Y/N " << '\n';
			M_repeat = false;

			//I have added the Yes/No option incase wrong selection was made. rather than having multiple statements I have used
			//the not equal function, so if anything other than Y is entered it will return to main menu.
			//fully aware of the limitations, such as what if an integer is entered. working on this. 

			cin >> YesNo;
			if (YesNo != 'Y' && YesNo != 'y') {
				cout << "Returned to main menu" << '\n';
				break;
			}
			MEC121::Power_Eq();
			break;

		default:

			cout << "Please enter the chapter number" << '\n';
			cout << "Returned to main menu" << '\n';
			M_repeat = true;
			break;

		}
	}
	//repeating the loop for when the default condition - ie 1 2 or 3 is not selected
	while (M_repeat == true);


}

void MEC121::Force_Eq()
// want it to execute at least once  
{
	do
	{
		cout << "Select Your Unknown Variable" << '\n'
			<< " 1 - Force" << '\n'
			<< " 2 - Mass" << '\n'
			<< " 3 - Acceleration" << endl;

		cin >> Formula_Selection;



		switch (Formula_Selection) {

		case 1:
			cout << "Please enter Mass and Acceleration " << '\n';
			cout << "Mass is equal to (in kg)" << '\n';
			cin >> Mass;
			cout << "Acceleration is equal to" << '\n';
			cin >> Acc;
			//Because I am using force multiple times as a variable, instead of just declaring a function for force outside of class,
			//I am doing so within it
			Force = Mass * Acc;
			cout << "The Force is " << Force << " Newtons" << '\n';

			MEC121::Force_Eq();
			break;


		case 2:
			cout << "Please enter Force and Acceleration " << '\n';
			cout << "Force is equal to (in newtons)" << '\n';
			cin >> Force;
			cout << "Acceleration is equal to" << '\n';
			cin >> Acc;

			Mass = Force / Acc;
			cout << "The Mass is " << Mass << " kg" << '\n';

			MEC121::Force_Eq();
			break;

		case 3:
			cout << "Please enter Force and Mass " << '\n';
			cout << "Force is equal to (in newtons)" << '\n';
			cin >> Force;
			cout << "Mass is equal to (in kg)" << '\n';
			cin >> Mass;

			Acc = Force / Mass;
			cout << "The Acceleration is " << Acc << " m/s^2" << '\n';

			MEC121::Force_Eq();
			break;

		default:

			cout << "Give it another try" << '\n';
			break;

		}
	} while (Formula_Selection == 1 || Formula_Selection == 2 || Formula_Selection == 3);
};


void MEC121::Work_Eq()
// want it to execute at least once  
{
	do
	{
		cout << "Select Your Unknown Variable" << '\n'
			<< " 1 - Work Done" << '\n'
			<< " 2 - Force" << '\n'
			<< " 3 - Distance" << endl;

		cin >> Formula_Selection;

		switch (Formula_Selection) {

		case 1:
			cout << "Please enter Force and distance " << '\n'
				<< "Force is equal to  (in Newtons)" << '\n';
			cin >> Force;
			cout << "Distance is equal to (in M)" << '\n';
			cin >> Dist;

			Work = Force * Dist;
			cout << "The Work done is " << Work << '\n';
			MEC121::Work_Eq();
			break;

		case 2:
			cout << "Please enter Work and distance " << '\n';
			cout << "Work is equal to " << '\n';
			cin >> Work;
			cout << "Distance is equal to" << '\n';
			cin >> Dist;

			Force = Work / Dist;
			cout << "The Work done is " << Force << '\n';
			MEC121::Work_Eq();
			break;

		case 3:
			cout << "Please enter Work and Force " << '\n';
			cout << "Work is equal to " << '\n';
			cin >> Work;
			cout << "Force is equal to" << '\n';
			cin >> Force;

			Dist = Work / Force;
			cout << "The Distance is " << Dist << '\n';
			MEC121::Work_Eq();

		default:
			cout << "Give it another try" << '\n';
			break;

		}
	}

	while (Formula_Selection == 1 || Formula_Selection == 2 || Formula_Selection == 3);
}

void MEC121::Power_Eq()
// want it to execute at least once  
{
	do
	{
		cout << "Select Your Unknown Variable" << '\n'
			<< " 1 - Power (with which, comes great responsibility)" << '\n'  // a wee nod to my favourite superhero, uncle Ben. 
			<< " 2 - Force" << '\n'
			<< " 3 - Velocity" << endl;

		cin >> Formula_Selection;

		switch (Formula_Selection) {

		case 1:
			cout << "Please enter Force and Velocity " << '\n';
			cout << "Force is equal to " << '\n';
			cin >> Force;
			cout << "Velocity is equal to" << '\n';
			cin >> Vel;

			Power = Force * Vel;
			cout << "Power is equal to  " << Power << '\n';
			MEC121::Power_Eq();
			break;

		case 2:
			cout << "Please enter Power and Velocity " << '\n';
			cout << "Power is equal to " << '\n';
			cin >> Power;
			cout << "Velocity is equal to" << '\n';
			cin >> Vel;

			Force = Power / Vel;
			cout << "Force is equal to  " << Force << '\n';
			MEC121::Power_Eq();
			break;

		case 3:
			cout << "Please enter Power and Force " << '\n';
			cout << "Power is equal to " << '\n';
			cin >> Power;
			cout << "Force is equal to" << '\n';
			cin >> Force;

			Vel = Power / Force;
			cout << "Velocity is equal to " << Vel << '\n';
			MEC121::Power_Eq();

		default:
			cout << "Give it another try" << '\n';
			break;

		}
	}

	while (Formula_Selection == 1 || Formula_Selection == 2 || Formula_Selection == 3);
}

int b_main(void);

int b_main(void)
{
	MEC121 object2;
	object2.User_select();

	return (0);
}

