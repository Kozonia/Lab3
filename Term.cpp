#include "Term.h"


Term::Term()
{
	coefficient = 1;
	exponent = 1;
	variable = 'x';
}

Term::Term(double coef, int exp, char var)
{
	coefficient = coef;
	exponent = exp;
	variable = var;
}

Term::Term(Term& term)
{
	this->coefficient = term.coefficient;
	this->exponent = term.exponent;
	this->variable = term.variable;
}

void Term::setCoefficient(double coef)
{
	coefficient = coef;
}

void Term::setExponent(int exp)
{
	exponent = exp;
}

void Term::setVariable(char var)
{
	variable = var;
}

double Term::getCoefficient()
{
	return coefficient;
}

int Term::getExponent()
{
	return exponent;
}

char Term::getVariable()
{
	return variable;
}

Term& Term::operator=(Term& right)
{
	this->coefficient = right.coefficient;
	this->exponent = right.exponent;
	this->variable = right.variable;
	return *this;
}

bool Term::operator<=(Term& right)
{
	if (this->exponent <= right.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Term::operator>=(Term& right)
{
	if (this->exponent >= right.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Term::operator<(Term& right)
{
	if (this->exponent < right.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Term::operator>(Term& right)
{
	if (this->exponent > right.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Term::operator==(Term& right)
{
	if (this->exponent == right.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Term::compatible(Term& term)
{
	if (this->variable == term.variable && this->exponent == term.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}