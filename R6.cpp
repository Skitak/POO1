#include "R6.h"

void R6::executerRegleModification() {
	donnees->setD4(std::min(donnees->getD4() - 10, donnees->getD2() ));
	resultat->reussite(id, "D4 est modifie : " + std::to_string(donnees->getD4()));
}
