#ifndef R6_H_
#define R6_H_

#include "RegleModification.h"

class R6 : public RegleModification{
public:
	R6() : RegleModification("R6"){}
	virtual ~R6();

protected:
	void exectuerRegleModification();
};

#endif
