#pragma once
#include <ctime>
#include <string>
using namespace std;

/***********************
用于测试排序数组的各种方法
ichenzihao@Gmail.com
2018/9/1
***********************/

/*
格式化打印数组
arr：数组名
n：数组长度
*/
template<typename T>
void printArray(T arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	return;
}

/*
判断数组是否排序成功（默认检测升序）
arr：数组名
n：数组长度
*/
template<typename T>
bool isSort(T arr[], int n) {
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}

	return true;
}

/*
测试算法执行时间即算法性能
arr：数名
n：数组长度
*/
template <typename T>
void testSort(string sortName, void(*sort)(T[], int), T arr[], int n) {
	clock_t startTime = clock();
	sort(arr, n);
	clock_t endTime = clock();
	//保证算法正确性
	if (isSort(arr, n)) {
		cout << "排序结果正确:";
	}
	else {
		cout << "排序结果出错";
		return;
	}
	
	cout << sortName << "(" << n << "元素) : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;

	return;
}