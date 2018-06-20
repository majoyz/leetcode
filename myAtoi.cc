///
/// @file    myAtoi.cc
/// @author  majoyz(zmj-miss@live.com)
/// @date    2018-06-20 16:59:15
///

#include <iostream>
#include <string>
using namespace std;
class Solution {
	public:
		int myAtoi(string str) {
			int lenth = str.size();
			int sign = 0;
			int kong = 0;
			for(int i=0;i<lenth;++i){
				if(str[i]==' '){
					++kong;
					continue;
				}
				else
					break;
			}
			if(str[kong]=='+')
				sign=1;
			else if(str[kong]=='-')
				sign=-1;
			else if(str[kong]>='0'&&str[kong]<='9'){
				sign=1;
				--kong;
			}
			else
				return 0;
			int num=0;
			int jdg=0;
			for(int j=kong+1;j<lenth;++j){
				if(str[j]>='0'&&str[j]<='9'){
					jdg=num;
					num=num*10+str[j]-48;
					if((num+48-str[j])/10!=jdg||num<0){
						cout << "yichu" << endl;
						if(sign==1)
							return 2147483647;
						else
							return -2147483648;
					}
				}
				else
					break;
			}

			return sign*num;
		}
};

int main(){
	string nums = "2147483648";
	Solution s;
	int num = s.myAtoi(nums);
	cout << "num = " << num << endl;

	return 0;
}
