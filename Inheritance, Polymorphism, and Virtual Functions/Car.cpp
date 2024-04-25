// Alexander Morey
// CIS 1202 101
// 4/24/2024

#include "Car.h"

using namespace std;

Car::Car() : Vehicles()
{
	_doors = 2;
}

void Car::setDoors(int doors)
{
	_doors = doors;
}

int Car::getDoors()
{
	return _doors;
}

void Car::Displayinfo()
{
	Vehicles::Displayinfo();
	cout << "# of doors: " << _doors << endl;
}