#include "R1.h"


R1::R1() : Regle("R1"){}

bool R1::executerRegle() const {
	return donnees->getD1() % 2 != 0;
}

