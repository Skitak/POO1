#include "R2.h"

R2::R2() : Regle("R2") {}

bool R2::exectuerRegle() const {
	return (donnees->getD1() - donnees->getD4()) % 2 == 0;
}
