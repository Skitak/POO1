#include "ConteneurRegles.h"

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
}

