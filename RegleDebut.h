#ifndef REGLEDEBUT_H_
#define REGLEDEBUT_H_

#include "RegleModification.h"

class RegleDebut : public RegleModification {
public:
	RegleDebut() : RegleModification("DEB"){}
	virtual ~RegleDebut(){}

protected:
	void executerRegleModification();
};

#endif
