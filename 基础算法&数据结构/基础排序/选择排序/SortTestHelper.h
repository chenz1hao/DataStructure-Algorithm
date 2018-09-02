#ifndef SORTTESTHELPER_H_INCLUDED
#define SORTTESTHELPER_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cassert>
#include <stdlib.h>

using namespace std;


namespace SortTestHelper{
    /**
        生成长度为n的数组，数组元素值为在用户定义范围内随机生成
    **/
    int* generateRandomArray(int n, int rangeL, int rangeR){
        // 这个函数定义正在cassert中，作用是
        // 如果它的条件返回错误，则终止程序进行
        // 这里则是为了保证rangeL要小于等于rangeR
        // 以提高程序的健壮性
        assert(rangeL <= rangeR);

        int *arr = new int[n];

        //设置随机种子
        srand(time(NULL));
        for(int i=0; i<n; i++){
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }

    /**
        打印数组的方法
    **/
    template<typename T>
    void printArray(T arr[], int n){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;

        return ;
    }

    /**
        判断数组的排序正确性
    **/
    template<typename T>
    bool isSorted(T arr[], int n){
        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                return false;
            }
        }
        return true;
    }



    /**
        测试排序算法的性能
    **/
    template<typename T>
    void testSort(string sortName, void(*sort)(T[], int n), T arr[], int n){
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        // cout << "排序结果验证通过" << endl;
        cout << sortName << "("<< n << "元素) : " << double(endTime-startTime)/CLOCKS_PER_SEC << " s"<<endl;

        return ;
    }
}


#endif // SORTTESTHELPER_H_INCLUDED
