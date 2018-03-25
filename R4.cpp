#include "R4.h"

void R4::executerRegleModification() {
	donnees->setD1(donnees->getD1() - 3);
	resultat->reussite(id, "D1 est modifie : " + std::to_string(donnees->getD1()));
}
