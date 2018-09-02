#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

/************************************************************
Copyright (C), 2018, ichenzihao@Gmail.com
FileName: InsertionSort.h
Author: ChenZihao
Version: 1.0
Date: 2018/08/31
Description:�򵥵Ĳ��������㷨��ϰ�����ǵ������ԣ�ֻ�ṩ�˴�С��������򷽷�������ʵ��Ӧ��ʱ����������޸�;
            Simple insertion sort practice, Considering convenience, may only offer the sort algorithm
            of small to large, but you can randomly modify it by yourself when it comes to a real issue;
***********************************************************/

using namespace std;

template<typename T>
void InsertionSort(T arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            int temp = arr[i];
            int j;
            for(j=i-2; j>=-1; j--){
                if(j == -1){
                    break;
                }
                if(temp > arr[j]){
                    break;
                }
            }

            for(int k=i-1; k>j; k--){
                arr[k+1] = arr[k];
            }
            arr[j+1] = temp;
        }
    }


    return ;
}

template<typename T>
void InsertionSort1(T arr[], int n){
    for(int i=1; i<n; i++){
        // Ѱ�� arr[i]���ʵĲ���λ��
        for(int j = i; j > 0 && arr[j] < arr[j-1]; j --){
            swap(arr[j], arr[j-1]);
        }
    }

    return ;
}

/**
    ���������Ż����㷨
**/
template<typename T>
void InsertionSort2(T arr[], int n){
    for(int i=1; i<n; i++){
        T temp = arr[i];
        if(temp < arr[i-1]){
            int j;
            for(j=i; j>0 && arr[j-1] > temp; j--){
                arr[j] = arr[j-1];
            }
            arr[j] = temp;
        }
    }
}




#endif // INSERTIONSORT_H_INCLUDED
