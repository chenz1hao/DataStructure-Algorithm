#pragma once
using namespace std;
#include "mergeSorting.h"

// 递归使用归并排序，对arr[l.....r]的范围进行排序
template<typename T>
void __merge(T arr[], int l, int mid, int r) {
	
	int* aux = (int *)malloc(sizeof(int)*(r - l + 1));
	for (int i = l; i <= r; i++) {
		aux[i-l] = arr[i];
	}

	int i = l, j = mid + 1;
	for (int k = l; k <= r; k++) {
		if (i > mid) {
			arr[k] = aux[j - l];
			j ++;
		}
		else if (j > r) {
			arr[k] = aux[i - l];
			i++;
		}
		else if (aux[i - l] < aux[j - l]) {
			arr[k] = aux[i - l];
			i++;
		}
		else {
			arr[k] = aux[j - l];
			j++;
		}
	}
}


template<typename T>
void __mergeSort(T arr[], int l, int r) {
	//if( l >= r ){
	//	return;
	//}
	if (r - l <= 15) {
		insertionSortForMergeSort(arr, l, r);
	}
	else {
		int mid = (l + r) / 2;
		__mergeSort(arr, l, mid);
		__mergeSort(arr, mid + 1, r);
		if (arr[mid] > arr[mid + 1]) {
			__merge(arr, l, mid, r);
		}
	}
}

template<typename T>
void mergeSort(T arr[], int n) {
	__mergeSort(arr, 0, n-1);
}