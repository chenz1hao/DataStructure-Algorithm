#include <iostream> 
#include "SelectionSort.h"
#include "GetArray.h"
#include "SortTest.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "ShellSort.h"
using namespace std;
int main()
{
	int n = 100000;
	int* arr = getRandomArray(1000, 0, 1000);
	int* arr1 = getRandomArray(10000, 0, 10000);
	int* arr2 = getRandomArray(100000, 0, 100000);
	testSort("Ï£¶ûÅÅĞò", ShellSort, arr, 1000);
	testSort("Ï£¶ûÅÅĞò", ShellSort, arr1, 10000);
	testSort("Ï£¶ûÅÅĞò", ShellSort, arr2, 100000);
	getchar();

	return 0;
}