#include<iostream>
#include<string>
using namespace std;

/*class Solution {
public:
    string convert(string s, int numRows) {
		string resultStr;
		unsigned int jRow;
		unsigned int i;
		unsigned int tmp;
		unsigned int angleLength = numRows + numRows - 2;

		for(i = 1; i <= s.size();) {
			resultStr += s[i - 1];
			i += angleLength;
		}

		for(jRow = 2; jRow <= numRows - 1; jRow++) {
			for(i = jRow; i <= s.size(); ) {
				resultStr += s[i - 1];
				tmp = i + (numRows - jRow) * 2;
				if(tmp <= s.size())
					resultStr += s[tmp - 1];
				i += angleLength;
			}
		}

		for(i = numRows; i <= s.size();) {
			resultStr += s[i - 1];
			i += angleLength;
		}

		return resultStr;
    }
};*/




class Solution {
public:
    string convert(string s, int numRows) {
		if(numRows <= 1)
			return s;
		int angleLength = numRows + numRows - 2;
		int jRow, tmp, i;
		string resultStr;
		for(jRow = 1;jRow <= numRows; jRow++) {
			for(i = jRow; i <= s.size();) {
				resultStr += s[i - 1];
				if(jRow != 1 && jRow != numRows) {
					tmp = i + (numRows - jRow) * 2;
					if(tmp <= s.size())
						resultStr += s[tmp - 1];
				}
				i += angleLength;
			}
		}
		return resultStr;
	}
};
int main() {
	Solution solution;
	cout << solution.convert("PAYPALISHIRING", 3) << endl;
	//cout << solution.convert("ABCDEFGHIJKLM", 5) << endl;
	getchar();
}