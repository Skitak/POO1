#include "R3.h"

R3::R3() : Regle("R3") {}

bool R3::executerRegle() {
	if (donnees->getD1() % 2 != 0){
		resultat->echec(id, "D1 est impair : " + std::to_string(donnees->getD1()));
			return false;
	}
	else if (donnees->getD3() % 2 != 0){
			resultat->echec(id, "D3 est impair : " + std::to_string(donnees->getD3()));
				return false;
		}
	else {
		resultat->reussite(id, "D1 et D3 sont pairs : " + std::to_string(donnees->getD1()) + "/" + std::to_string(donnees->getD3()) );
		return true;
	}
}
