#ifndef PLANTESTEXTREME_H_
#define PLANTESTEXTREME_H_

#include "PlanTest.h"
#include "ConteneurRegles.h"

class PlanTestExtreme : public PlanTest{
public:
	PlanTestExtreme();
	virtual ~PlanTestExtreme(){}
protected:
	ConteneurRegles* chargerRegles();

};

#endif /* PLANTESTEXTREME_H_ */
