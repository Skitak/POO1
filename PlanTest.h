#ifndef PLANTEST_H_
#define PLANTEST_H_

#include <string>
#include "Resultat.h"
#include "ConteneurRegles.h"

class PlanTest {
public:
	PlanTest() : resultat(NULL), conteneurReglesDepart(NULL){}
	virtual ~PlanTest();

	Resultat* getResultat() const {return resultat;}
	void appliquer(Donnees donnees);
	void initialiserRegles() ;

protected:
	virtual ConteneurRegles* chargerRegles();

private:
	Resultat* resultat;
	ConteneurRegles* conteneurReglesDepart;
};

#endif
