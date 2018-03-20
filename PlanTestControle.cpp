#include "PlanTestControle.h"

#include "R3.h"
#include "RegleDebut.h"
#include "RegleFin.h"
#include "ConteneurRegles.h"

PlanTestControle::PlanTestControle() : PlanTestExtreme() {}

ConteneurRegles* PlanTestControle::chargerRegles() {
	ConteneurRegles* r1 = PlanTestExtreme::chargerRegles();
	ConteneurRegles* debut = new ConteneurRegles(new RegleDebut(),r1,NULL);
	ConteneurRegles* fin = new ConteneurRegles(new RegleFin());
	return new ConteneurRegles(new R3(), debut, fin);
}
