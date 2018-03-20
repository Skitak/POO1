#include "R6.h"

void R6::exectuerRegleModification() {
	donnees->setD4(std::min(donnees->getD4() - 10, donnees->getD2() ));
}
