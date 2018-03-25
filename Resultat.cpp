#include "Resultat.h"
#include <ctime>
#include <iostream>

int Resultat::nbConstructeurs = 0;
int Resultat::nbDestructeurs = 0;

Resultat::Resultat(Donnees const& donnees) {
	time_t now = time(0);
	std::string dt = ctime(&now);
	informations += dt + "\n\n";

	informations += donnees.toString() + "\n";
	Resultat::addConstructeur();
}

Resultat::~Resultat(){
	Resultat::addDestructeur();
}

void Resultat::reussite(std::string id, std::string operation) {
	ajouterInformations("REUSSITE - " + id + " : " + operation);
}

void Resultat::echec(std::string id, std::string operation) {
	ajouterInformations("ECHEC    - " + id + " : " + operation);
}

void Resultat::info(std::string id, std::string operation) {
	ajouterInformations("INFO     - " + id + " : " + operation);
}

void Resultat::completerTest(const Donnees& donnees) {
	informations += donnees.toString() + "\n";
}

void Resultat::ajouterInformations(std::string infos) {
	informations += infos + "\n";
}

std::ostream& operator<<( std::ostream &flux, Resultat const& resultat){
	flux << resultat.getInformations();
	return flux;
}
