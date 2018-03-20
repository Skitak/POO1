#include "Regle.h"
#include <string>

Regle::Regle(std::string name) : id(name){
	donnees = NULL;
	resultat = NULL;
}

Regle::~Regle() {
	if (donnees == NULL)
		delete donnees;
	if (resultat == NULL)
		delete resultat;
}

bool Regle::executer(Donnees* donnees, Resultat* resultat) {
	bool resultatExecution = false;
	this->donnees = donnees;
	this->resultat = resultat;

	resultat->info(id, "Debut de la regle");

	prevalidation();
	resultatExecution = executerRegle();
	postvalidation();

	resultat->info(id, "Fin de la regle");

	return resultatExecution;
}

void Regle::prevalidation() {
	if (!donnees->valide())
		resultat->echec(id, "Prevalidation en echec");
}

void Regle::postvalidation() {
	if (!donnees->valide())
		resultat->echec(id, "Postvalidation en echec");
}
