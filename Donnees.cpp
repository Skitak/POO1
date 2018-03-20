#include "Donnees.h"

bool Donnees::setD1(int value) {
	if (value < 0)
		return false;
	d1 = value;
	return true;
}

bool Donnees::setD2(int value) {
	if (value <= d1 || value >= d3)
		return false;
	d2 = value;
	return true;
}

bool Donnees::setD3(int value) {
	if (value <= d1 )
		return false;
	d3 = value;
	return true;
}

bool Donnees::setD4(int value) {
	if (value % 2 != 0)
		return false;
	d4 = value;
	return true;
}

bool Donnees::setD5(int value) {
	if (value == d1 || value == d2 ||value == d3 ||value == d4)
		return false;
	d5 = value;
	return true;
}

bool Donnees::valide() {
	return setD2(d2) && setD3(d3) && setD5(d5);
}

std::string Donnees::toString() const {
	return "D(";
}
