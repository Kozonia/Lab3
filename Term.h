#ifndef TERM_H
#define TERM_H
class Term
{
private:
	double coefficient;
	int exponent;
	char variable;
public:
	Term();
	Term(double coef, int exp, char var);
	Term(Term& term);
	void setCoefficient(double coef);
	void setExponent(int exp);
	void setVariable(char var);
	double getCoefficient();
	int getExponent();
	char getVariable();
	Term& operator=(Term& right);
	bool operator<=(Term& right);      // compares the exponent of the terms and returns true if this's exponent is less than/equal to right's
	bool operator>=(Term& right);      // compares the exponent of the terms and returns true if this's exponent is greater than/equal to right's
	bool operator<(Term& right);         // compares the exponent of the terms and returns true if this's exponent is less than right's
	bool operator>(Term& right);         // compares the exponent of the terms and returns true if this's exponent is greater than right's
	bool operator==(Term& right);       // compares the exponent of the terms and returns true if this's exponent is equal to right's
	bool compatible(Term& term);    // tests whether the incoming term's variable and exponent match this term's exponent and variable (i.e. the two terms can be combined)


};
#endif

