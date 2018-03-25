#ifndef ENSEMBLEDONNEES1_H_
#define ENSEMBLEDONNEES1_H_

#include "Donnees.h"

class EnsembleDonnees1 : public Donnees{
public:
	EnsembleDonnees1() : Donnees(5,7,10,4,3) {}
	virtual ~EnsembleDonnees1(){}
};

#endif
