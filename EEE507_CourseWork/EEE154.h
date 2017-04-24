/**
* @author Adam Kavanagh <kavanagh-a1@email.ulster.ac.uk> <B00631162>
*
* @license
* @copyright Adam Kavanagh 2017
*
* This is designed as a formula sheet for EEE154 where the user selects the equation
* which they wish to use, select the known variables from the equation and then enter
* their values. The entered values are then used to calculate the unknown variable.
* All of this is run via a command window.
*
*/

#ifndef EEE154_h
#define EEE154_h

#include <iostream>

class EEE154;

class EEE154
{
private:
	double v, i, r, p, q, t, res;
	int equation, variables;
	char YN;

public:
	void equation_choice();
	void ohms_eqn();
	void power_eqn();
	void charge_eqn();

	EEE154();
};

#endif
