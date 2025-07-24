#ifndef SUPER_INT_ARRAY_H
#define SUPER_INT_ARRAY_H
#include <iostream>
#include <vector>
using namespace std;
class SuperIntArray
{
private:
	int* nums;
	int numberOfNums;
public:
	SuperIntArray();
	SuperIntArray(int numArray[], int size);
	SuperIntArray(int size); //changed from "num" to "size" because I assumed that's what it was meant for
	SuperIntArray(vector<int> numsVector);
	SuperIntArray(SuperIntArray& otherArray);
	~SuperIntArray();
	void setNums(int* num);
	int* getNums() const;
	void add(int num);
	int get(int index);
	void change(int index);
	static double getMax(int nums[], int size);
	static double getMin(int nums[], int size);
	static double getMean(int nums[], int size);
};
#endif

