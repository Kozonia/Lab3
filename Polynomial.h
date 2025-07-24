#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "Term.h"
#include <iostream>
class Polynomial
{
private:
	Term* terms;
	int numTerms;
	void simplify();
public:
	Polynomial();
	Polynomial(Term* terms, int numTerms);
	Polynomial(Polynomial& poly);
	~Polynomial();
	void setTerms(Term* terms);
	void setNumTerms(int numTerms);
	Term* getTerms();
	int getNumTerms();
	Polynomial& operator=(Polynomial& right);
	Polynomial& operator+(Polynomial& right);
	Polynomial& operator-(Polynomial& right);
	Polynomial& operator*(Polynomial& right);
	friend std::ostream& operator<<(std::ostream& stream, const Polynomial& poly);


};
#endif

