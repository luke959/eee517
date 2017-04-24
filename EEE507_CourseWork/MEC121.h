// header file-decaring the variables for the class. 


#ifndef MEC121_h
#define MEC121_h



#include <iostream>
using namespace std;


class MEC121;

class MEC121
{
public:
	MEC121(); // contructor

			  //Variables
			  // for Force eq
	double Force;
	double Mass;
	double Acc; //acceleration


				// for Work eq  Force already declared above, and remains a double so no need to re declare as a new variable
	double Work;
	double Dist;

	// for Power eq
	double Power;
	double Vel; //velocity



				//setting for the loop to continue, if 1,2 or 3 is not selected for main menu
	bool M_repeat;

	char YesNo;

	int Selection;
	int Formula_Selection;

	//Functions
	//need to make prvate but having issues
	void User_select();
	void Force_Eq();
	void Work_Eq();
	void Power_Eq();

};

#endif