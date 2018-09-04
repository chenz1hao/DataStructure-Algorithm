#pragma once
#include <ctime>
#include <string>
using namespace std;

/***********************
���ڲ�����������ĸ��ַ���
ichenzihao@Gmail.com
2018/9/1
***********************/

/*
��ʽ����ӡ����
arr��������
n�����鳤��
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
�ж������Ƿ�����ɹ���Ĭ�ϼ������
arr��������
n�����鳤��
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
�����㷨ִ��ʱ�伴�㷨����
arr������
n�����鳤��
*/
template <typename T>
void testSort(string sortName, void(*sort)(T[], int), T arr[], int n) {
	clock_t startTime = clock();
	sort(arr, n);
	clock_t endTime = clock();
	//��֤�㷨��ȷ��
	if (isSort(arr, n)) {
		cout << "��������ȷ:";
	}
	else {
		cout << "����������";
		return;
	}
	
	cout << sortName << "(" << n << "Ԫ��) : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;

	return;
}