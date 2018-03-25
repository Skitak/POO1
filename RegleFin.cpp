#include "RegleFin.h"

void RegleFin::executerRegleModification() {
	if (donnees->setD5(donnees->getD5()+10))
		resultat->reussite(id, "D5 + 10 : " + std::to_string(donnees->getD5()));
	else
		resultat->echec(id, "D5 + 10 : " + std::to_string(donnees->getD5()));
}
