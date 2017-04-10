//对用户的签到类别进行计数
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
#define ifilename "E:\\TKY_train5.txt"
#define ofilename "E:\\TKY_countCheckCate.txt"

int main(){
	double precision, recall,f1;
	cin >> precision >> recall;
	f1 = (2.0*precision*recall) / (precision + recall);
	cout << "f1:" << f1<<endl;

	return 0;
}