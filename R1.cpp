#include "R1.h"


R1::R1() : Regle("R1"){}

bool R1::executerRegle() {
	if (donnees->getD1() % 2 != 0){
		resultat->reussite(id, "d1 est impair : " + std::to_string(donnees->getD1()));
		return true;
	}
	resultat->echec(id, "d1 est pair : " + std::to_string(donnees->getD1()));
	return false;
}

