#ifndef HIGHLANDER_H
#define HIGHLANDER_H
#include <iostream>
using namespace std;

class Highlander
{
private:
	string name;
	static int count;
public:
	Highlander();
	Highlander(string str);
	~Highlander();
	static string speak(); // "There can be only one.  But now there are " + count
	string status();       // if count == 1 "Immortal"  if count > 1 "Murderous"
};
#endif

