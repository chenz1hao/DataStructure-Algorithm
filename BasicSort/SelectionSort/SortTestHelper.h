#ifndef SORTTESTHELPER_H_INCLUDED
#define SORTTESTHELPER_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cassert>
#include <stdlib.h>

using namespace std;


namespace SortTestHelper{
    // 生成有n个元素的随机数组，每个元素的范围是[rangeL, rangeR]
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

    template<typename T>
    void printArray(T arr[], int n){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;

        return ;
    }

}


#endif // SORTTESTHELPER_H_INCLUDED
