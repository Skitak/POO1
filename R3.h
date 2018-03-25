#ifndef R3_H_
#define R3_H_

#include "Regle.h"

class R3 : public Regle{
public:
	R3();
	virtual ~R3(){}
protected:
	bool executerRegle();
};

#endif /* R3_H_ */
