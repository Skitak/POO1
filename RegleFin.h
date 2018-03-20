#ifndef REGLEFIN_H_
#define REGLEFIN_H_

#include "RegleModification.h"

class RegleFin : public RegleModification{
public:
	RegleFin() : RegleModification("FIN"){}
	virtual ~RegleFin(){}
protected:
	void executerRegleModification();
};

#endif /* REGLEFIN_H_ */
