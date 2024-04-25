// Alexander Morey
// CIS 1202 101
// 4/24/2024

#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicles()
{
	_tow_capacity = 0;
}

void Truck::settow_capacity(int tow_capacity)
{
	_tow_capacity = tow_capacity;
}

int Truck::gettow_capacity()
{
	return _tow_capacity;
}

void Truck::Displayinfo()
{
	Vehicles::Displayinfo();
	cout << "tow capacity : " << _tow_capacity << endl;
}