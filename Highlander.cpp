#include "Highlander.h"
#include <string>

int Highlander::count = 0;

Highlander::Highlander()
{
	name = "Gavin";
	count += 1;
}

Highlander::Highlander(string str)
{
	name = str;
	count += 1;
}

Highlander::~Highlander()
{

}

string Highlander::speak()
{
	if (count == 1)
	{
		return "There can only be one.";
	}
	else
	{
		return "There can be only one. But now there are " + to_string(count);
	}
}

string Highlander::status()
{
	if (count == 1)
	{
		return "Immortal";
	}
	else
	{
		return "Murderous";
	}
}