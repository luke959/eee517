#pragma once

#ifndef BME303_h
#define BME303_h


class BME303;

class BME303
{

public:
	BME303();

	double dc;
	double dm;
	double Rf;
	double l;
	double c;
	double e;
	double Abs;
	double f;
	double i;
	double o;
	double n;
	double m;
	double rm;

	//functions
	void selectnow();

	//inputs
	int option;
};

#endif // CW3_H#pragma once
#pragma once
