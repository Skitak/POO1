#include "PlanTestExtreme.h"

#include "R1.h"
#include "R2.h"
#include "R3.h"
#include "R4.h"
#include "R5.h"
#include "R6.h"
#include "ConteneurRegles.h"

PlanTestExtreme::PlanTestExtreme(): PlanTest(){}

ConteneurRegles* PlanTestExtreme::chargerRegles() {
	ConteneurRegles* r6 = new ConteneurRegles(new R6());
	ConteneurRegles* r5 = new ConteneurRegles(new R5());
	ConteneurRegles* r2 = new ConteneurRegles(new R2(),r5,r6);
	ConteneurRegles* r4 = new ConteneurRegles(new R4());
	return new ConteneurRegles(new R1(),r4,r2);
}
