/************************************************************
Copyright (C), 2018, ichenzihao@Gmail.com
FileName: .cpp
Author: ChenZihao
Version: 1.0
Date: 2018/08/31
Description:
***********************************************************/

#include <iostream>
#include "共用头/SortTestHelper.h"
#include "选择排序/SelectionSort.h"
#include "插入排序/InsertionSort.h"

using namespace std;

int main()
{
/*
    int *arr1 = SortTestHelper::generateRandomArray(1000, 0, 10000);
    int *arr2 = SortTestHelper::generateRandomArray(10000, 0, 10000);
    int *arr3 = SortTestHelper::generateRandomArray(100000, 0, 10000);

    SortTestHelper::testSort("选择排序法", SelectionSort, arr1, 1000);
    SortTestHelper::testSort("选择排序法", SelectionSort, arr2, 10000);
    SortTestHelper::testSort("选择排序法", SelectionSort, arr3, 100000);
*/

/*
    int *arr4 = SortTestHelper::generateRandomArray(1000, 0, 10000);
    int *arr5 = SortTestHelper::generateRandomArray(10000, 0, 10000);
    int *arr6 = SortTestHelper::generateRandomArray(100000, 0, 10000);

    SortTestHelper::testSort("插入排序法", InsertionSort, arr4, 1000);
    SortTestHelper::testSort("插入排序法", InsertionSort, arr5, 10000);
    SortTestHelper::testSort("插入排序法", InsertionSort, arr6, 100000);
*/
/*
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;*/
    /*delete[] arr4;
    delete[] arr5;
    delete[] arr6; */

    int n = 100000;
    int *arr = SortTestHelper::generateNearlyOrderedArray(n, 10);
    int *arr2 = SortTestHelper::generateNearlyOrderedArray(n, 10);


    SortTestHelper::testSort("插入排序(100000个几乎有序的数组)", InsertionSort2, arr, n);
    SortTestHelper::testSort("选择排序(100000个几乎有序的数组)", SelectionSort, arr2, n);

    delete[] arr;
    delete[] arr2;

    return 0;
}
