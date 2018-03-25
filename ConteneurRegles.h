#ifndef CONTENEURREGLES_H_
#define CONTENEURREGLES_H_

#include "Regle.h"

class ConteneurRegles {
public:
	ConteneurRegles(Regle* rule) : ConteneurRegles(rule, NULL, NULL) {}
	ConteneurRegles(Regle* rule, ConteneurRegles* positif, ConteneurRegles* negatif);
	virtual ~ConteneurRegles();

	Regle* getRegle() const {return regle;}
	ConteneurRegles* getSuivantNegatif() const {return suivantNegatif;}
	ConteneurRegles* getSuivantPositif() const {return suivantPositif;}

private:
	Regle* regle;
	ConteneurRegles* suivantPositif;
	ConteneurRegles* suivantNegatif;

};

#endif /* CONTENEURREGLES_H_ */
