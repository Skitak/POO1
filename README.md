18:19:53 **** Incremental Build of configuration Debug for project Projet 2 ****
make all 
Building file: ../src/PlanTest.cpp
Invoking: GCC C++ Compiler
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/PlanTest.d" -MT"src/PlanTest.o" -o "src/PlanTest.o" "../src/PlanTest.cpp"
Finished building: ../src/PlanTest.cpp
 
Building target: Projet 2
Invoking: GCC C++ Linker
g++  -o "Projet 2"  ./src/ConteneurRegles.o ./src/Donnees.o ./src/EnsembleDonnees1.o ./src/EnsembleDonnees2.o ./src/PlanTest.o ./src/PlanTestControle.o ./src/PlanTestExtreme.o ./src/Projet\ 2.o ./src/R1.o ./src/R2.o ./src/R3.o ./src/R4.o ./src/R5.o ./src/R6.o ./src/Regle.o ./src/RegleDebut.o ./src/RegleFin.o ./src/RegleModification.o ./src/Resultat.o   
./src/EnsembleDonnees1.o : Dans la fonction « EnsembleDonnees1::EnsembleDonnees1() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/EnsembleDonnees1.cpp:4 : référence indéfinie vers « vtable for EnsembleDonnees1 »
./src/EnsembleDonnees2.o : Dans la fonction « EnsembleDonnees2::EnsembleDonnees2() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/EnsembleDonnees2.cpp:3 : référence indéfinie vers « vtable for EnsembleDonnees2 »
./src/PlanTest.o : Dans la fonction « R4::R4() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R4.h:8 : référence indéfinie vers « vtable for R4 »
./src/PlanTest.o : Dans la fonction « R5::R5() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R5.h:8 : référence indéfinie vers « vtable for R5 »
./src/PlanTestControle.o : Dans la fonction « PlanTestControle::PlanTestControle() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/PlanTestControle.cpp:8 : référence indéfinie vers « vtable for PlanTestControle »
./src/PlanTestExtreme.o : Dans la fonction « PlanTestExtreme::PlanTestExtreme() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/PlanTestExtreme.cpp:11 : référence indéfinie vers « vtable for PlanTestExtreme »
./src/PlanTestExtreme.o : Dans la fonction « R6::R6() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R6.h:8 : référence indéfinie vers « vtable for R6 »
./src/R1.o : Dans la fonction « R1::R1() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R1.cpp:4 : référence indéfinie vers « vtable for R1 »
./src/R2.o : Dans la fonction « R2::R2() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R2.cpp:3 : référence indéfinie vers « vtable for R2 »
./src/R3.o : Dans la fonction « R3::R3() » :
/home/skitak/eclipse-workspace/Projet 2/Debug/../src/R3.cpp:3 : référence indéfinie vers « vtable for R3 »
collect2: error: ld a retourné le statut de sortie 1
make: *** [makefile:47: Projet 2] Error 1
