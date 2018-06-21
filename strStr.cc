///
/// @file    strStr.cc
/// @author  majoyz(zmj-miss@live.com)
/// @date    2018-06-20 19:21:53
///

#include <iostream>
#include <string>
using namespace std;

class Solution {
	public:
		int strStr(string haystack, string needle) {
			if(needle=="")
				return 0;
			int lenh = haystack.size();
			int lenn = needle.size();
			for(int i=0;i<=lenh-lenn;++i){
				int tmp=0;
				for(int j=0;j<lenn;++j){
					if(needle[j]==haystack[i+tmp]){
						if(j==lenn-1)
							return i;
						++tmp;
						continue;
					}
					else
						break;
				}
			}
			return -1;
		}
};

int main(){
	string haystack = "abcdefg";
	string needle = "defg";
	Solution s;
	int answer = s.strStr(haystack,needle);
	cout << "answer = " << answer << endl;
	return 0;
}
