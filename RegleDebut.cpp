#include "RegleDebut.h"

void RegleDebut::executerRegleModification() {
	donnees->setD1( std::min(10,donnees->getD1()) );
}
