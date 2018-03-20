#include "Resultat.h"
#include <ctime>
#include <iostream>

Resultat::Resultat(Donnees const& donnees) {
	time_t now = time(0);
	std::string dt = ctime(&now);
	informations += dt + "\n\n";

	informations += donnees.toString() + "\n";
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
