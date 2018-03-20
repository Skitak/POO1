#ifndef R1_H_
#define R1_H_

#include "Regle.h"

class R1 : public Regle{
public:
	R1();
	~R1();

protected:
	bool executerRegle() const;
};

#endif
