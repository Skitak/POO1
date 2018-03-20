#ifndef REGLEMODIFICATION_H_
#define REGLEMODIFICATION_H_

#include <string>
#include "Regle.h"

class RegleModification : public Regle {
public:
	RegleModification(std::string id) : Regle(id){}
	virtual ~RegleModification(){}

	bool executerRegle();
protected:
	virtual void executerRegleModification() {}
};

#endif
