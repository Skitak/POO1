#ifndef PLANTESTCONTROLE_H_
#define PLANTESTCONTROLE_H_

#include "PlanTestExtreme.h"
#include "ConteneurRegles.h"

class PlanTestControle : public PlanTestExtreme {
public:
	PlanTestControle();
	virtual ~PlanTestControle(){}
protected:
	ConteneurRegles* chargerRegles();
};

#endif /* PLANTESTCONTROLE_H_ */
