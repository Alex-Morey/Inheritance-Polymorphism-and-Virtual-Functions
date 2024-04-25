#pragma once

#include <iostream>
#include <string>
#include "Vehicles.h"

using namespace std;

class Car : public Vehicles
{
public:
	Car();
	void setDoors(int doors);
	int getDoors();
	void Displayinfo();

private:
	int _doors;

};
