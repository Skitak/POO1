#include "R5.h"

void R5::executerRegleModification() {
	donnees->setD5(donnees->getD5() + donnees->getD4() + donnees->getD1() );
	resultat->reussite(id, "D5 est modifie : " + std::to_string(donnees->getD5()));
}
