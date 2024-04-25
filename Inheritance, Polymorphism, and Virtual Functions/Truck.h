#pragma once

#include <iostream>
#include <string>
#include "Vehicles.h"

using namespace std;

class Truck : public Vehicles
{
public:
	Truck();
	void settow_capacity(int tow_capacity);
	int gettow_capacity();
	void Displayinfo();

private:
	int _tow_capacity;

};
