///
/// @file    quickSort.cpp
/// @author  majoyz(zmj-miss@live.com)
/// @date    2018-06-21 13:41:37
///

#include <iostream>
using namespace std;

void Qsort(int a[], int low, int high)//快速排序
{
	if(low >= high)
	{
		return;
	}
	int first = low;
	int last = high;
	int key = a[first];/*用字表的第一个记录作为枢轴*/

	while(first < last)
	{
		while(first < last && a[last] >= key)
		{
			--last;
		}

		a[first] = a[last];/*将比第一个小的移到低端*/

		while(first < last && a[first] <= key)
		{
			++first;
		}

		a[last] = a[first];    
		/*将比第一个大的移到高端*/
	}
	a[first] = key;/*枢轴记录到位*/
	Qsort(a, low, first-1);
	Qsort(a, first+1, high);
}

int main(){
	int a[10] = {99,88,4,65,2,67,88,12,98,0};
	Qsort(a,0,9);
	for(auto num : a)
		cout << num << " ";
	cout << endl;

	return 0;
}
