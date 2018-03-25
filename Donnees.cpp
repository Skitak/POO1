#include "Donnees.h"
#include "Resultat.h"

Donnees::Donnees(int a, int b, int c, int d, int e): d1(a), d2(b), d3(c), d4(d), d5(e) {
	Resultat::addConstructeur();
}

Donnees::~Donnees() {
	Resultat::addDestructeur();
}

Donnees::Donnees(Donnees const& autre) : d1(autre.d1), d2(autre.d2), d3(autre.d3), d4(autre.d4), d5(autre.d5) {
	Resultat::addConstructeur();
}

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
	return "D(" + std::to_string(d1) + "/"
			+ std::to_string(d2) + "/"
			+ std::to_string(d3) + "/"
			+ std::to_string(d4) + "/"
			+ std::to_string(d5) + ")";
}
