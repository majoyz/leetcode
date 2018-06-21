///
/// @file    mysort.cc
/// @author  majoyz(zmj-miss@live.com)
/// @date    2018-06-21 10:35:29
///

#include <iostream>
using namespace std;

void insert_sort(int array[],int n)//插入排序
{
	int i,j;
	int temp;
	for(i = 1;i < n;i++)
	{
		temp = array[i];
		for(j = i;j > 0 && array[j-1] > temp;j--)//从后往前判断插入点
		{
			array[j] = array[j-1];
		}
		array[j] = temp;
	}
}

