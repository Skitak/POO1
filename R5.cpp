#include "R5.h"

void R5::exectuerRegleModification() {
	donnees->setD5(donnees->getD5() + donnees->getD4() + donnees->getD1() );
}
