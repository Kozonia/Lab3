#include "Time.h"


Time::Time()
{
	days = 0;
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time::Time(int hours, int minutes)
{
	days = 0;
	this->hours = hours;
	this->minutes = minutes;
	seconds = 0;
}

Time::Time(int hours, int minutes, int seconds)
{
	days = 0;
	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}

Time::Time(int days, int hours, int minutes, int seconds)
{
	this->days = days;
	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}

int Time::getDays()
{
	return days;
}

int Time::getHours()
{
	return hours;
}

int Time::getMinutes()
{
	return minutes;
}

int Time::getSeconds()
{
	return seconds;
}

void Time::simplify()
{
	if (seconds >= 60)
	{
		minutes += (seconds / 60);
		seconds = seconds % 60;
	}
	if (minutes >= 60)
	{
		hours += (minutes / 60);
		minutes = minutes % 60;
	}
	if (hours >= 24)
	{
		days += (hours / 24);
		hours = hours % 24;
	}
	if (seconds < 0)
	{
		minutes -= 1;
		seconds += 60;
	}
	if (minutes < 0)
	{
		hours -= 1;
		minutes += 60;
	}
	if (hours < 0)
	{
		days -= 1;
		hours += 24;
	}
	if (days < 0)
	{
		days = 0;
	}

}

Time Time::operator+ (Time& right)
{
	Time temp;
	temp.days = days + right.days;
	temp.hours = hours + right.hours;
	temp.minutes = minutes + right.minutes;
	temp.seconds = seconds + right.seconds;
	temp.simplify();
	return temp;

}

Time Time::operator- (Time& right)
{
	Time temp;
	temp.days = days - right.days;
	temp.hours = hours - right.hours;
	temp.minutes = minutes - right.minutes;
	temp.seconds = seconds - right.seconds;
	temp.simplify();
	return temp;
}

bool Time::operator> (Time& right)
{
	if (days > right.days)
	{
		return true;
	}
	else if (days == right.days && hours > right.hours)
	{
		return true;
	}
	else if (days == right.days && hours == right.hours && minutes > right.minutes)
	{
		return true;
	}
	else if (days == right.days && hours == right.hours && minutes == right.minutes && seconds > right.seconds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Time::operator< (Time& right)
{
	if (days < right.days)
	{
		return true;
	}
	else if (days == right.days && hours < right.hours)
	{
		return true;
	}
	else if (days == right.days && hours == right.hours && minutes < right.minutes)
	{
		return true;
	}
	else if (days == right.days && hours == right.hours && minutes == right.minutes && seconds < right.seconds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Time::operator== (Time& right)
{
	if (days == right.days)
	{
		return true;
	}
	else if (hours == right.hours)
	{
		return true;
	}
	else if (minutes == right.minutes)
	{
		return true;
	}
	else if (seconds == right.seconds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream& operator<< (ostream& stream, const Time& object)
{
	stream << object.days << " " <<
		object.hours << ":" <<
		object.minutes << " " <<
		object.seconds;
	return stream;
}

int Time::timeInSeconds()
{
	Time temp;
	temp.days = days;
	temp.hours = hours;
	temp.minutes = minutes;
	temp.seconds = seconds;
	
	temp.hours += (temp.days * 24);
	temp.minutes += (temp.hours * 60);
	temp.seconds += (temp.minutes * 60);
	return temp.seconds;
	
}