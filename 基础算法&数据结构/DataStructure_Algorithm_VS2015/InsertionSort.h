#pragma once

using namespace std;

/***********************
插入排序（升序）
ichenzihao@Gmail.com
2018/9/1
***********************/

/*
	arr：数组名
	n：数组长度
	数组下标[0,n-1]
*/
template <typename T>
void InsertionSortOne(T arr[], int n)
{
	for (int i = 1; i < n; i++) {
		T temp = arr[i];
		if (temp < arr[i - 1]) {
			int insertIndex = 0;
			for (int j = i-1; j >= 0; j--) {
				if (temp > arr[j]) {
					insertIndex = j + 1;
					break;
				}
			}
			for (int j = i - 1; j >= insertIndex; j--) {
				arr[j + 1] = arr[j];
			}
			arr[insertIndex] = temp;
		}
	}

	return;
}

/*
	arr：数组名
	n：数组长度
	数组下标[0,n-1]
*/
template<typename T>
void InsertionSortTwo(T arr[], int n) {
	for (int i = 1; i < n; i++) {
		T temp = arr[i];
		if (temp < arr[i - 1]) {
			int j;
			for (j = i; j > 0; j--) {
				if (arr[j - 1] > temp) {
					arr[j] = arr[j - 1];
				}
			}
			/*50-54行可以简化为*/
			//for (j = i; j > 0 && arr[j - 1] > temp; j--) {
			//	arr[j] = arr[j - 1];
			//}
			arr[j-1] = temp;
		}
	}

	return;
}