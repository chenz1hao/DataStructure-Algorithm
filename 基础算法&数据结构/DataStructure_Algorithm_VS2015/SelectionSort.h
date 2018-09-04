#pragma once

using namespace std;

/***********************
简单选择排序（升序）
ichenzihao@Gmail.com
2018/9/1
***********************/

/*
arr：数组名
n：数组长度
数组下标[0,n-1]
*/
template <typename T>
void SelectionSort(T arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(arr[minIndex], arr[i]);
		}
	}

	return;
}