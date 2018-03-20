#ifndef R2_H_
#define R2_H_

#include "Regle.h"

class R2 : public Regle{
public:
	R2();
	virtual ~R2();
protected:
	bool exectuerRegle() const;

};

#endif
