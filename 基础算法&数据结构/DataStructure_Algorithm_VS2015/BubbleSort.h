#pragma once

using namespace std;

/***********************
Ã°ÅÝÅÅÐò£¨ÉýÐò£©
ichenzihao@Gmail.com
2018/9/4
***********************/
template<typename T>
void BubbleSort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	return;
}