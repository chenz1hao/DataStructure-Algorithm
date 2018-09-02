#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

/************************************************************
Copyright (C), 2018, ichenzihao@Gmail.com
FileName: SelectionSort.h
Author: ChenZihao
Version: 1.0
Date: 2018/08/31
Description: 简单的选择排序算法练习，考虑到方便性，只提供了从小到大的排序方法，但在实际应用时你可以自行修改;
            Simple selection sort practice, Considering convenience, may only offer the sort algorithm
            of small to large, but you can randomly modify it by yourself when it comes to a real issue;
***********************************************************/


using namespace std;

template<typename T>
void SelectionSort(T arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        if(minIndex != i){
           swap(arr[minIndex], arr[i]);
        }
    }
    return ;
}

#endif // SELECTIONSORT_H_INCLUDED
