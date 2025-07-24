#include "Highlander.h"
#include "SuperIntArray.h"
#include "Time.h"
#include <iostream>
using namespace std;

//First Mini Lab Testers
void testHighlander();
void testSuperIntArray();

//Second Mini Lab Testers
void assignmentTest();
void testTimeAddition();
void testTimeSubtraction();
void testTimeRelationalOperators();
void testTimeExtractionOperator();
void testTimeIntegerConversion();

//Third Mini Lab Testers


int main()
{
	//First Mini Lab Testers
	testHighlander();
	testSuperIntArray();

	//Second Mini Lab Testers
	assignmentTest();
	testTimeAddition();
	testTimeSubtraction();
	testTimeRelationalOperators();
	testTimeExtractionOperator();
	testTimeIntegerConversion();

	//Third Mini Lab Testers




	return 0;
}

void testHighlander()
{
	
	Highlander Warrior1;
	cout << Warrior1.speak() << endl;
	cout << "Warrior 1 status: " << Warrior1.status() << endl;
	Highlander Warrior2("Mr.Better-Warrior");
	cout << Warrior2.speak() << endl;
	cout << "Warrior 1 status: " << Warrior1.status() << endl;
	cout << "Warrior 2 status: " << Warrior2.status() << endl;
	
}

void testSuperIntArray()
{
	int array1[] = { 1, 2, 3, 4, 0 };
	SuperIntArray myArray;
	myArray.setNums(array1);
	cout << myArray.getMax(array1, sizeof(array1)) << endl;
	myArray.add(5);
	cout << myArray.getMax(array1, sizeof(array1)) << endl;

	SuperIntArray yourArray = myArray;
	cout << yourArray.getMax(array1, sizeof(array1)) << endl;
}

void assignmentTest()
{
	Time MyTime(12, 5, 45);
	Time YourTime(3, 23);

	cout << "Before setting them equal" << endl;
	cout << "MyTime: " << endl << "	Days: " << MyTime.getDays() << endl
		<< "	Hours: " << MyTime.getHours() << endl
		<< "	Minutes: " << MyTime.getMinutes() << endl
		<< "	Seconds: " << MyTime.getSeconds() << endl;

	cout << "YourTime: " << endl << "	Days: " << YourTime.getDays() << endl
		<< "	Hours: " << YourTime.getHours() << endl
		<< "	Minutes: " << YourTime.getMinutes() << endl
		<< "	Seconds: " << YourTime.getSeconds() << endl;

	MyTime = YourTime;
	cout << endl;

	cout << "After setting them equal" << endl;
	cout << "MyTime: " << endl << "	Days: " << MyTime.getDays() << endl
		<< "	Hours: " << MyTime.getHours() << endl
		<< "	Minutes: " << MyTime.getMinutes() << endl
		<< "	Seconds: " << MyTime.getSeconds() << endl;

	cout << "YourTime: " << endl << "	Days: " << YourTime.getDays() << endl
		<< "	Hours: " << YourTime.getHours() << endl
		<< "	Minutes: " << YourTime.getMinutes() << endl
		<< "	Seconds: " << YourTime.getSeconds() << endl;
	cout << endl;

}


void testTimeAddition()
{
	Time MyTime(6, 15, 37, 20);
	Time YourTime(2, 13, 26, 50);

	cout << "MyTime: " << endl << "	Days: " << MyTime.getDays() << endl
		<< "	Hours: " << MyTime.getHours() << endl
		<< "	Minutes: " << MyTime.getMinutes() << endl
		<< "	Seconds: " << MyTime.getSeconds() << endl;

	cout << endl;
	cout << "YourTime: " << endl << "	Days: " << YourTime.getDays() << endl
		<< "	Hours: " << YourTime.getHours() << endl
		<< "	Minutes: " << YourTime.getMinutes() << endl
		<< "	Seconds: " << YourTime.getSeconds() << endl;

	Time NewTime = (MyTime + YourTime);

	cout << endl;
	cout << "Combined Time: " << endl << "	Days: " << NewTime.getDays() << endl
		<< "	Hours: " << NewTime.getHours() << endl
		<< "	Minutes: " << NewTime.getMinutes() << endl
		<< "	Seconds: " << NewTime.getSeconds() << endl;
	cout << endl;

}


void testTimeSubtraction()
{
	Time MyTime(6, 15, 37, 20);
	Time YourTime(2, 18, 26, 50);

	cout << "MyTime: " << endl << "	Days: " << MyTime.getDays() << endl
		<< "	Hours: " << MyTime.getHours() << endl
		<< "	Minutes: " << MyTime.getMinutes() << endl
		<< "	Seconds: " << MyTime.getSeconds() << endl;

	cout << endl;
	cout << "YourTime: " << endl << "	Days: " << YourTime.getDays() << endl
		<< "	Hours: " << YourTime.getHours() << endl
		<< "	Minutes: " << YourTime.getMinutes() << endl
		<< "	Seconds: " << YourTime.getSeconds() << endl;

	Time NewTime = (MyTime - YourTime);

	cout << endl;
	cout << "Subtracted Time: " << endl << "	Days: " << NewTime.getDays() << endl
		<< "	Hours: " << NewTime.getHours() << endl
		<< "	Minutes: " << NewTime.getMinutes() << endl
		<< "	Seconds: " << NewTime.getSeconds() << endl;
	cout << endl;
}

void testTimeRelationalOperators()
{
	Time MyTime(6, 15, 37, 20);
	Time YourTime(2, 18, 26, 50);

	cout << boolalpha;
	cout << "Is MyTime > YourTime: " << (MyTime > YourTime) << endl;
	cout << "Is MyTime < YourTime: " << (MyTime < YourTime) << endl;
	cout << "Is MyTime == YourTime: " << (MyTime == YourTime) << endl;
	cout << endl;
}

void testTimeExtractionOperator()
{
	Time MyTime(0, 12, 11, 48);
	cout << MyTime << endl;
}

void testTimeIntegerConversion()
{
	Time MyTime(6, 15, 30, 20);
	cout << MyTime.timeInSeconds();
}