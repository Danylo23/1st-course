#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void main(void) {
	char b, l, c;
	cin >> b;
	plane plane1(b, 1000, 200, 1000000, 2015, 37, 'F');
	plane1.getName();
	plane1.getVolume();
	plane1.getPassengers();
	plane1.getPrice();
	plane1.getYear();
	plane1.getType();
	plane1.getLocation();

	cin >> l;
	plane plane2(l, 1500, 300, 2000000, 2013, 56, 'G');
	plane2.getName();
	plane2.getVolume();
	plane2.getPassengers();
	plane2.getPrice();
	plane2.getYear();
	plane2.getType();
	plane2.getLocation();

	cin >> c;
	plane plane3(c, 1200, 250, 1500000, 2010, 12, 'U');
	plane3.getName();;
	plane3.getVolume();
	plane3.getPassengers();
	plane3.getPrice();
	plane3.getYear();
	plane3.getType();
	plane3.getLocation();

	system("pause");

}