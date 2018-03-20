#include "PlanTest.h"

#include "R1.h"
#include "R4.h"
#include "R5.h"
#include "Regle.h"
#include "ConteneurRegles.h"

void PlanTest::appliquer(Donnees donnees) {
	resultat = new Resultat(donnees);
	ConteneurRegles* conteneurRegleCourante = conteneurReglesDepart;
	while (conteneurRegleCourante != NULL) {
		bool positif = conteneurRegleCourante->getRegle()->executer(&donnees, resultat);
		conteneurRegleCourante = positif ?
				conteneurRegleCourante->getSuivantPositif() : conteneurRegleCourante->getSuivantNegatif();
	}
}

void PlanTest::initialiserRegles() {
	conteneurReglesDepart = chargerRegles();
}

PlanTest::~PlanTest() {
	if (conteneurReglesDepart != NULL)
		delete conteneurReglesDepart;
	if (resultat != NULL)
		delete resultat;
}

ConteneurRegles* PlanTest::chargerRegles() {
	ConteneurRegles* r4 = new ConteneurRegles(new R4());
	ConteneurRegles* r5 = new ConteneurRegles(new R5());
	ConteneurRegles* conteneurRegles = new ConteneurRegles(new R1(),r4,r5);
	return conteneurRegles;
}
