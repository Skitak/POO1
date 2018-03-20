#include "R3.h"

R3::R3() : Regle("R3") {}

bool R3::exectuerRegle() const {
	return donnees->getD1() % 2 == 0 && donnees->getD3() % 2 == 0;
}
