#pragma once
#include <cassert>
#include <ctime>
#include <stdlib.h>
using namespace std;

/***********************
	用于生成各种用于测试排序算法的数组
	ichenzihao@Gmail.com
	2018/9/1
***********************/

/*
生成升序数组
n：数组长度
*/
int* getSortArrayAsc(int n) {
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}

	return arr;
}

/*
生成降序数组
n：数组长度
*/
int* getSortArrayDesc(int n) {
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = n - i - 1;
	}

	return arr;
}

/*
生成随机数组
n：数组长度
rangeL：数组元素值范围左界值，闭区间
rangeR：数组元素值范围右界值，闭区间
*/
int* getRandomArray(int n, int rangeL, int rangeR) {
	assert(rangeR >= rangeL);	//保证rangeL始终小于等于rangeR
	
	int* arr = new int[n];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
	}

	return arr;
}

/*
	生成几乎有序的数组（主要用于测试排序性能）
	n：数组长度
	swapTime：任意两个元素的交换次数，用于打乱有序数组
*/
int* getNearlySortArray(int n, int swapTimes) {
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}

	srand((unsigned int)time(NULL));

	for (int i = 0; i < swapTimes; i++) {
		int randomX = rand() % n;
		int randomY = rand() % n;
		swap(arr[randomX], arr[randomY]);
	}

	return arr;
}

