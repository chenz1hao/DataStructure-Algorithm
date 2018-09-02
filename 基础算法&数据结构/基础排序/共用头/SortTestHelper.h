#ifndef SORTTESTHELPER_H_INCLUDED
#define SORTTESTHELPER_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cassert>
#include <stdlib.h>

using namespace std;


namespace SortTestHelper{
    /**
        ���ɳ���Ϊn�����飬����Ԫ��ֵΪ���û����巶Χ���������
    **/
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

    /**
        ����һ������Ϊn�ģ��ӽ����������
    **/
    int *generateNearlyOrderedArray(int n, int swapTimes){
        int *arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = i;
        }
        srand(time(NULL));
        for(int i=0; i<swapTimes; i++){
            int postX = rand() % (n);
            int postY = rand() % (n);
            swap(arr[postX], arr[postY]);
        }

        return arr;
    }

    /**
        ��ӡ����ķ���
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
        �ж������������ȷ��
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
        ���������㷨������
    **/
    template<typename T>
    void testSort(string sortName, void(*sort)(T[], int n), T arr[], int n){
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        // cout << "��������֤ͨ��" << endl;
        cout << sortName << "("<< n << "Ԫ��) : " << double(endTime-startTime)/CLOCKS_PER_SEC << " s"<<endl;

        return ;
    }


    int* copyIntArray(int a[], int n){
        int *arr = new int[n];
        copy(a, a+n, arr);
        return arr;
    }










}


#endif // SORTTESTHELPER_H_INCLUDED
