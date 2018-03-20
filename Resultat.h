#ifndef RESULTAT_H_
#define RESULTAT_H_

#include <string>
#include "Donnees.h"
#include "time.h"

class Resultat {
public:
	Resultat(Donnees const& donnees);
	~Resultat(){}

	void reussite(std::string id, std::string operation);
	void echec(std::string id, std::string operation);
	void info(std::string id, std::string operation);
	void completerTest(Donnees const& donnees);

	std::string getInformations() const {return informations;};

private:
	std::string informations;

	void ajouterInformations(std::string infos);
};

#endif /* RESULTAT_H_ */
