#include "Polynomial.h"


Polynomial::Polynomial()
{
	numTerms = 3;
	terms = new Term[numTerms];
}

Polynomial::Polynomial(Term* terms, int numTerms)
{
	this->terms = terms;
	this->numTerms = numTerms;
}

Polynomial::Polynomial(Polynomial& poly)
{
	if (this != &poly)
	{
		this->numTerms = poly.numTerms;
		delete[] terms;
		terms = new Term[numTerms];
		this->terms = poly.terms;
	}
}

Polynomial::~Polynomial()
{
	delete[] terms;
}

void Polynomial::setTerms(Term* terms)
{
	this->terms = terms;
}

void Polynomial::setNumTerms(int numTerms)
{
	this->numTerms = numTerms;
}

Term* Polynomial::getTerms()
{
	return terms;
}

int Polynomial::getNumTerms()
{
	return numTerms;
}

void Polynomial::simplify()
{

}

Polynomial& Polynomial::operator=(Polynomial& right)
{
	if (this != &right)
	{
		this->numTerms = right.numTerms;
		delete[] terms;
		terms = new Term[numTerms];
		this->terms = right.terms;
		return *this;
	}
}

Polynomial& Polynomial::operator+(Polynomial& right)
{
	return *this;
}

Polynomial& Polynomial::operator-(Polynomial& right)
{
	return *this;
}

Polynomial& Polynomial::operator*(Polynomial& right)
{
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Polynomial& poly)
{
	stream << poly.terms->getCoefficient() << poly.terms->getVariable() << "^" << poly.terms->getExponent() << std::endl;
	return stream;
}