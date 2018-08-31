#ifndef SORTTESTHELPER_H_INCLUDED
#define SORTTESTHELPER_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cassert>
#include <stdlib.h>

using namespace std;


namespace SortTestHelper{
    // ������n��Ԫ�ص�������飬ÿ��Ԫ�صķ�Χ��[rangeL, rangeR]
    int* generateRandomArray(int n, int rangeL, int rangeR){
        // ���������������cassert�У�������
        // ��������������ش�������ֹ�������
        // ��������Ϊ�˱�֤rangeLҪС�ڵ���rangeR
        // ����߳���Ľ�׳��
        assert(rangeL <= rangeR);

        int *arr = new int[n];

        //�����������
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
