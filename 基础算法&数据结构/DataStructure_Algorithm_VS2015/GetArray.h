#pragma once
#include <cassert>
#include <ctime>
#include <stdlib.h>
using namespace std;

/***********************
	�������ɸ������ڲ��������㷨������
	ichenzihao@Gmail.com
	2018/9/1
***********************/

/*
������������
n�����鳤��
*/
int* getSortArrayAsc(int n) {
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}

	return arr;
}

/*
���ɽ�������
n�����鳤��
*/
int* getSortArrayDesc(int n) {
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = n - i - 1;
	}

	return arr;
}

/*
�����������
n�����鳤��
rangeL������Ԫ��ֵ��Χ���ֵ��������
rangeR������Ԫ��ֵ��Χ�ҽ�ֵ��������
*/
int* getRandomArray(int n, int rangeL, int rangeR) {
	assert(rangeR >= rangeL);	//��֤rangeLʼ��С�ڵ���rangeR
	
	int* arr = new int[n];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
	}

	return arr;
}

/*
	���ɼ�����������飨��Ҫ���ڲ����������ܣ�
	n�����鳤��
	swapTime����������Ԫ�صĽ������������ڴ�����������
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

