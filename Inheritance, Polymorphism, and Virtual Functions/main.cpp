//Alexander Morey
//CIS 1202
//2/24/2024

#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Vehicles.h"

using namespace std;

int main()
{
	string manufacturer;
	int year;
	cout << "Vehicle:\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cin.ignore();
	Vehicles vehicle;
	vehicle.setManufacturer(manufacturer);
	vehicle.setYear(year);
	vehicle.Displayinfo();

	int doors;
	cout << endl << "Car:\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cin.ignore();
	cout << "Enter the number of doors: ";
	cin >> doors;
	cin.ignore();
	Car car;
	car.setManufacturer(manufacturer);
	car.setYear(year);
	car.setDoors(doors);
	car.Displayinfo();

	int tow_capacity;
	cout << endl << "Truck:\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cin.ignore();
	cout << "Enter the towing capacity: ";
	cin >> tow_capacity;
	cin.ignore();
	Truck truck;
	truck.setManufacturer(manufacturer);
	truck.setYear(year);
	truck.settow_capacity(tow_capacity);
	truck.Displayinfo();
}