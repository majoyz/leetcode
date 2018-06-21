 ///
 /// @file    selectSort.cpp
 /// @author  majoyz(zmj-miss@live.com)
 /// @date    2018-06-21 14:00:51
 ///
 
#include <iostream>
using namespace std;

void select_sort(int a[],int n){
	int min,tmp;
	for(int i=0;i<n;++i){
		min = i;
		for(int j=i+1;j<n;++j){
			if(a[j]<a[min])
				min = j;
		}
		if(min!=i){
			tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
		}
	}
}

int main(){
	int a[10] = {99,88,4,65,2,67,88,12,98,0};
	select_sort(a,10);
	for(auto num : a)
		cout << num << " ";
	cout << endl;

	return 0;
}
