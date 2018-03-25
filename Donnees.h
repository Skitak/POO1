#ifndef DONNEES_H_
#define DONNEES_H_

#include <string>

class Donnees {
public:

	Donnees(int a, int b, int c, int d, int e);
	Donnees(): Donnees(1,2,3,4,5){}
	Donnees(Donnees const& autre);
	virtual ~Donnees();

	int getD1() const { return d1;};
	int getD2() const { return d2;};
	int getD3() const { return d3;};
	int getD4() const { return d4;};
	int getD5() const { return d5;};

	bool setD1(int);
	bool setD2(int);
	bool setD3(int);
	bool setD4(int);
	bool setD5(int);

	std::string toString() const;

	bool valide ();

private:
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
};

#endif
