#include <iostream> 
#include "SelectionSort.h"
#include "GetArray.h"
#include "SortTest.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "ShellSort.h"
#include "mergeSorting.h"
using namespace std;
int main()
{
	int n = 100000;
	int* arr = getNearlySortArray(10000, 10);
	int* arr1 = getNearlySortArray(100000, 10);
	int* arr2 = getNearlySortArray(1000000, 10);
	testSort("¹é²¢", mergeSort, arr, 10000);
	testSort("¹é²¢", mergeSort, arr1, 100000);
	testSort("¹é²¢", mergeSort, arr2, 1000000);

	delete[] arr1;
	delete[] arr2;

	getchar();

	return 0;
}