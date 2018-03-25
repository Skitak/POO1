#ifndef ENSEMBLEDONNEES2_H_
#define ENSEMBLEDONNEES2_H_

#include "Donnees.h"

class EnsembleDonnees2 : public Donnees{
public:
	EnsembleDonnees2() : Donnees(10,15,18,20,5) {}
	virtual ~EnsembleDonnees2(){}
};

#endif
