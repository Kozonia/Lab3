#include "SuperIntArray.h"


SuperIntArray::SuperIntArray()
{
	numberOfNums = 5;
	nums = new int[numberOfNums] {0, 0, 0, 0, 0};
}

SuperIntArray::SuperIntArray(int numArray[], int size)
{
	numberOfNums = size;
	nums = numArray;
}

SuperIntArray::SuperIntArray(int size)
{
	numberOfNums = size;
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++)
	{
		nums[i] = 0;
	}
}

SuperIntArray::SuperIntArray(vector<int> numsVector)
{
	numberOfNums = static_cast<int>(numsVector.size());
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++)
	{
		nums[i] = numsVector[i];
	}
}

SuperIntArray::SuperIntArray(SuperIntArray& otherArray)
{
	numberOfNums = otherArray.numberOfNums;
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++)
	{
		nums[i] = otherArray.nums[i];
	}
}

SuperIntArray::~SuperIntArray()
{
	delete[] nums;
}

void SuperIntArray::setNums(int* num)
{
	for (int i = 0; i < numberOfNums; i++)
	{
		nums[i] = num[i];
	}
}

int* SuperIntArray::getNums() const
{
	return nums;
}

void SuperIntArray::add(int num)
{
	for (int i = 0; i < numberOfNums; i++)
	{
		if (nums[i] == 0)
		{
			nums[i] = num;
			break;
		}
		
	}
}

int SuperIntArray::get(int index)
{
	return nums[index];
}

void SuperIntArray::change(int index)
{
	nums[index] = 0;
}

double SuperIntArray::getMax(int nums[], int size)
{
	int tempMax = 0;
	for (int i = 0; i < size; i++)
	{
		if (nums[i] > nums[i + 1])
		{
			tempMax = nums[i];
		}
	}
	return tempMax;
}

double SuperIntArray::getMin(int nums[], int size)
{
	int tempMin = 0;
	for (int i = 0; i < size; i++)
	{
		if (nums[i] < nums[i + 1])
		{
			tempMin = nums[i];
		}
	}
	return tempMin;
}

double SuperIntArray::getMean(int nums[], int size)
{
	int tempMean = 1;
	for (int i = 0; i < size; i++)
	{
		tempMean *= nums[i];
	}
	return tempMean;
}