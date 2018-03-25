#include "ConteneurRegles.h"

ConteneurRegles::ConteneurRegles(Regle* rule, ConteneurRegles* positif, ConteneurRegles* negatif):
regle(rule), suivantPositif(positif), suivantNegatif(negatif) {
	Resultat::addConstructeur();
}

ConteneurRegles::~ConteneurRegles() {
	delete regle;
	if (suivantNegatif != NULL){
		delete suivantNegatif;
		suivantNegatif = NULL;
	}
	if (suivantPositif != NULL){
		delete suivantPositif;
		suivantPositif = NULL;
	}
	Resultat::addDestructeur();
}

