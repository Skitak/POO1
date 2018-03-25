#include "RegleDebut.h"

void RegleDebut::executerRegleModification() {
	if (donnees->setD1( std::min(10,donnees->getD1()) ))
		resultat->reussite(id, "D1 est valide : " + std::to_string(donnees->getD1()));
	else
		resultat->echec(id, "D1 est invalide : " + std::to_string(donnees->getD1()));
}
