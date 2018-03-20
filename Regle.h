#ifndef REGLE_H_
#define REGLE_H_

#include <string>
#include "Donnees.h"
#include "Resultat.h"

class Regle {
public:
	Regle(std::string name);
	virtual ~Regle();

	bool executer(Donnees* donnees, Resultat* resultat);
	std::string getId() const {return id;}

protected:
	Donnees* donnees;
	Resultat* resultat;

	virtual bool executerRegle() {return true;}

private:
	std::string id;

	void prevalidation();
	void postvalidation();
};

#endif
