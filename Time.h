#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class Time
{
private:
	int days;
	int hours;
	int minutes;
	int seconds;
public:
	Time();
	Time(int hours, int minutes);
	Time(int hours, int minutes, int seconds);
	Time(int days, int hours, int minutes, int seconds);
	int getDays();
	int getHours();
	int getMinutes();
	int getSeconds();
	void simplify();
	Time operator+ (Time& right);
	Time operator- (Time& right);
	bool operator> (Time& right);
	bool operator< (Time& right);
	bool operator== (Time& right);
	friend ostream& operator<< (ostream& stream, const Time& object);
	int timeInSeconds();
	
	
};
#endif

