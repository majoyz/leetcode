 ///
 /// @file    bubbleSort.cpp
 /// @author  majoyz(zmj-miss@live.com)
 /// @date    2018-06-21 13:28:39
 ///
 
#include <iostream>
using namespace std;

void bubble_sort(int a[], int n){//冒泡排序
	int tmp;
	for(int i = 0;i<n;++i)
		for(int j = n-1;j>i;--j)
			if(a[j]<a[j-1]){
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
}

int main(){
	int a[10] = {99,88,4,65,2,67,88,12,98,0};
	bubble_sort(a,10);
	for(auto num : a)
		cout << num << " ";
	cout << endl;

	return 0;
}
