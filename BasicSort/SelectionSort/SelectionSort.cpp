/************************************************************
Copyright (C), 2018, ichenzihao@Gmail.com
FileName: SelectionSort.cpp
Author: ChenZihao
Version: 1.0
Date: 2018/08/31
Description: �򵥵�ѡ�������㷨��ϰ�����ǵ������ԣ�ֻ�ṩ�˴�С��������򷽷�������ʵ��Ӧ��ʱ����������޸�;
            Simple selection sort practice, Considering convenience, may only offer the sort algorithm
            of small to large, but you can randomly modify it by yourself when it comes to a real issue;
***********************************************************/

#include <iostream>
#include "Student.h"
#include "sortTestHelper.h"

using namespace std;
template<typename T>
void SelectionSort(T arr[], int n)
{
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i + 1; j < n; j ++){
            if(arr[j] < arr[minIndex]){
                    minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[minIndex], arr[i]);
        }
    }

    return ;
}



int main()
{
    // 10000��Ԫ��
    int n = 10000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    SelectionSort(arr, n);
    SortTestHelper::printArray(arr, n);

    // arr��һ������ռ䣬ʹ�����ֶ��ͷţ����ͷſ��ܴ���Ǳ��
    // �ڴ�й©
    delete[] arr;

//    float b[4] = {4.4, 3.3, 2.2, 1.1};
//    SelectionSort(b, 4);
//    for(int i=0; i<4; i++){
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
//
//    string c[4] = {"D", "C", "B", "A"};
//    SelectionSort(c, 4);
//    for(int i=0; i<4; i++){
//        cout<<c[i]<<" ";
//    }
//    cout<<endl;
//
//    Student d[4] = {{"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
//    SelectionSort(d, 4);
//    for(int i=0; i<4; i++){
//        cout<<d[i];
//    }
//    cout<<endl;


    return 0;
}
