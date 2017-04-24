/**
* @todo Alex's and Laura's code can get stuck within a loop following normal parameters 
*/

// Calling in the header file for each persons code.
// You will need to rename main functions in each source file so not to conflict with the main in this file.
// Use similar naming convention for main function in each source
#include "Module_Selector.h"
#include "EEE154.h"
#include "MEC121.h"
#include "BME303.h"
#include "MEC104.h"
#include <iostream>

using namespace std;

void Module_Selector::Module_Choice()
{
	do
	{
		cout << "This is the Equation Database for Biomedical Engineering." << "\n\n";
		cout << "These are the modules available within the database:" << "\n";
		cout << "1. Electrical Technology (EEE154)";
		cout << "\n2. Mechanical Technology (MEC121)";
		cout << "\n3. Analytical Science (BME303)";
		cout << "\n4. ";
		cout << "\n5. Manufacturing Processes (MEC104)";
		cout << "\n6. Exit";
		cout << "\n\n" << "Please select a module to view the equations within it: ";
		cin >> Module_Selection;

		// Defining the objects required to call the functions 
		EEE154 object1;
		MEC121 object2;
		BME303 object3;
		MEC104 m;

		switch (Module_Selection) // Place function from each persons code into the corresponding cases.
		{
		case 1:
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
			object1.equation_choice();
			break;
		case 2:
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
			object2.User_select();
			break;
		case 3:
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
			object3.selectnow();
			break;
		case 4:
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
			cout << "Nothing happens yet!";
			break;
		case 5:
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
			m.equation_selection();
			break;
		case 6:
			cout << "\n";
			cout << "- - - - - - - - - - - - - SHUTDOWN COMPLETE - - - - - - - - - - - - -" << "\n\n";
			break;
		default:
			cout << "\n" << "Incorrect selection, restart program and try again" << "\n\n";
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n";
			break;
		}
		if (Module_Selection == 1 || Module_Selection == 2 || Module_Selection == 3 || Module_Selection == 4 || Module_Selection == 5)
		{
			cout << "Would you like to select another module to view the equations from that module? [Y/N]: " << flush;
			cin >> mainYN;
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << "\n\n";
		}
	} while ((Module_Selection == 1 || Module_Selection == 2 || Module_Selection == 3 || Module_Selection == 4 || Module_Selection == 5 || Module_Selection == 6) && (mainYN == 'Y' || mainYN == 'y'));
};

int main(void);

int main(void)
{
	Module_Selector mainObject;

	mainObject.Module_Choice();

	return(0);
};