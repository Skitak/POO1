#ifndef R4_H_
#define R4_H_

#include "RegleModification.h"

class R4 : public RegleModification{
public:
	R4() : RegleModification("R4"){}
	virtual ~R4(){}

protected:
	void executerRegleModification();
};

#endif /* R4_H_ */
