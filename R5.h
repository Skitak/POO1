#ifndef R5_H_
#define R5_H_

#include "RegleModification.h"

class R5 : public RegleModification{
public:
	R5(): RegleModification("R5"){}
	virtual ~R5(){}

protected:
	void executerRegleModification();
};

#endif /* R5_H_ */
