# 基础数据结构与算法代码实现 | DataStructure-Algorithm
*这个库是个人为了弥补学习数据结构&算法时理论多 && 练习少的缺点，故巩固复习一些基础的数据结构与算法的代码实现 
By ChenZihao ichenzihao@Gmail.com*

**请使用VisualStudio2015打开DataStructure_Algorithm_VS2015.sln即可导入项目**
-----------------
#### 2018/8/31
 选择排序法，创建SortTestHelper.h头文件，其中包括对待排序数组进行随机生成(generatedRandomArray)、对排序算法结果正确性验证(isSorted)、对排序算法性能测试(testSort)以及对数组的打印(printArray)。根据对各数量级的数组进行排序可以明显看出该排序算法时间复杂度为：O(n^2)
<br/>
![image](https://github.com/czhiemma/DataStructure-Algorithm/blob/master/READMEPIC/SelecetionSortTest.png)

-----------------

#### 2018/9/2
 插入排序法，在SortTestHelper.h头文件中加入了拷贝数组方法(copyIntArray)、生成一个近乎有序的数组的方法(generateNearlyOrderedArray)。
 插入排序算法可以看出也是一个o(n^2)级别的排序算法，其同选择排序算法的区别在于插入排序可以在每一次寻找过程只要找到合适的插入位置后退出，而选择排序法则每一趟都需要扫描后面未排序的所有元素。
 另外，虽然插入排序的时间复杂度级别为n方，但是当用它来对一个近乎有序的数组进行排序的时候时其复杂度会接近于O(n)，所以在对近乎有序的数组排序时其表现比一般的O(logN)级别算法都更好
 <br/>
  ![image](https://github.com/czhiemma/DataStructure-Algorithm/blob/master/READMEPIC/Selection&InsertionTest.png)
  ![image](https://github.com/czhiemma/DataStructure-Algorithm/blob/master/READMEPIC/NearlySortTest.png)

-----------------

#### 2018/9/4
 冒泡排序法：冒泡排序的在各种情况下性能都比较低，几乎不使用；时间复杂度明显的O(n^2)
 希尔排序法：又叫增量递减排序，其实就是插入排序的优化，因为插入排序在几乎有序的数组下排序性能会相当好，所以希尔排序就是在对其不断地进行有序化递进从而充分发挥插入排序的优势。
 <br/>
  ![image](https://github.com/czhiemma/DataStructure-Algorithm/blob/master/READMEPIC/ShellSortTest.png)
  ![image](https://github.com/czhiemma/DataStructure-Algorithm/blob/master/READMEPIC/BubbleSortTest.png)
  
