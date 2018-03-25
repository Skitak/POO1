#ifndef RESULTAT_H_
#define RESULTAT_H_

#include <string>
#include <iostream>
#include "Donnees.h"
#include "time.h"

class Resultat {
public:
	Resultat(Donnees const& donnees);
	~Resultat();

	void reussite(std::string id, std::string operation);
	void echec(std::string id, std::string operation);
	void info(std::string id, std::string operation);
	void completerTest(Donnees const& donnees);

	std::string getInformations() const {return informations;};

	static int getNbConstructeurs() {return nbConstructeurs;}
	static int getNbDestructeurs() {return nbDestructeurs;}
	static void addConstructeur() {nbConstructeurs++;}
	static void addDestructeur() {nbDestructeurs++;}

private:
	std::string informations;
	static int nbConstructeurs;
	static int nbDestructeurs;

	void ajouterInformations(std::string infos);
};

std::ostream& operator<<( std::ostream &flux, Resultat const& resultat);

#endif /* RESULTAT_H_ */


