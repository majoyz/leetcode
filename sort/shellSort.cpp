///
/// @file    shellSort.cpp
/// @author  majoyz(zmj-miss@live.com)
/// @date    2018-06-21 10:55:36
///

#include <iostream>
using namespace std;

void swap_int(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void shell_sort(int *data,int len)
{
	if(len<=1||data==NULL)
		return;
	for(int div=len/2;div>=1;div=div/2)//定增量div，并不断减小
		for(int i=0;i<=div;++i)//分组成div组
			for(int j=i;j<len-div;j+=div)//对每组进行插入排序
				for(int k=j;k<len;k+=div)
					if(data[j]>data[k])
						swap_int(data+j,data+k);//交换两个数的值
}

int main(){
	int a[10] = {7,45,88,9,23,64,70,0,-2,77};
	shell_sort(a,10);
	for(auto num : a)//-std=c++11
		cout << num << " ";
	cout << endl;

	return 0;
}
