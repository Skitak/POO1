#include "R2.h"

R2::R2() : Regle("R2") {}

bool R2::executerRegle() {
	if ((donnees->getD1() - donnees->getD4()) % 2 == 0){
		resultat->reussite(id, "D4-D1 est pair : " + std::to_string(donnees->getD4() - donnees->getD1()));
		return true;
	}
	resultat->echec(id, "D4-D1 est impair : " + std::to_string(donnees->getD4() - donnees->getD1()));
	return false;
}
