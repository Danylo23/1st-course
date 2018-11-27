#pragma once
#include <iostream>
#include <string>
using namespace std;
class plane {

	char name;
	double volume;
	double passengers;
protected:
	double price, year;
public:
	int type;
	char location;

	plane() {

	}
	plane(char Name, double Volume, double Passengers, double Price, double Year, int Type, char Location) {
		name = Name;
		volume = Volume;
		passengers = Passengers;
		price = Price;
		year = Year;
		type = Type;
		location = Location;

	}
	void getName() {
		cout << " name=" << name << "\n";

	}
	void getVolume() {
		cout << " volume=" << volume << "\n";

	}
	void getPassengers() {
		cout << " passengers=" << passengers << "\n";

	}
	void getPrice() {
		cout << " price=" << price << "\n";
	}
	void getYear() {
		cout << " year=" << year << "\n";
	}
	void getType() {
		cout << " type=" << type << "\n";
	}
	void getLocation() {
		cout << " location=" << location << "\n";
	}
};
