//待修改 使用c++多线程编程（将三维数组去掉使用一维struct）
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define UP "E://UP.txt"
#define LP "E://LP.txt"
#define LS "E://LS.txt"
#define POI "E://poi.txt"
#define test "E://float.txt"
#define K 60
struct Data{
	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60;
};
void mypushback(vector<Data>& vecdata, const double &d1, const double &d2, const double &d3, const double &d4, const double &d5, const double &d6, const double &d7, const double &d8, const double &d9, const double &d10, const double &d11, const double &d12, const double &d13, const double &d14, const double &d15, const double &d16, const double &d17, const double &d18, const double &d19, const double &d20, const double &d21, const double &d22, const double &d23, const double &d24, const double &d25, const double &d26, const double &d27, const double &d28, const double &d29, const double &d30, const double &d31, const double &d32, const double &d33, const double &d34, const double &d35, const double &d36, const double &d37, const double &d38, const double &d39, const double &d40, const double &d41, const double &d42, const double &d43, const double &d44, const double &d45, const double &d46, const double &d47, const double &d48, const double &d49, const double &d50, const double &d51, const double &d52, const double &d53, const double &d54, const double &d55, const double &d56, const double &d57, const double &d58, const double &d59, const double &d60){
	Data data;
	data.d1 = d1; data.d2 = d2; data.d3 = d3; data.d4 = d4; data.d5 = d5; data.d6 = d6; data.d7 = d7; data.d8 = d8; data.d9 = d9; data.d10 = d10; data.d11 = d11; data.d12 = d12; data.d13 = d13; data.d14 = d14; data.d15 = d15; data.d16 = d16; data.d17 = d17; data.d18 = d18; data.d19 = d19; data.d20 = d20; data.d21 = d21; data.d22 = d22; data.d23 = d23; data.d24 = d24; data.d25 = d25; data.d26 = d26; data.d27 = d27; data.d28 = d28; data.d29 = d29; data.d30 = d30; data.d31 = d31; data.d32 = d32; data.d33 = d33; data.d34 = d34; data.d35 = d35; data.d36 = d36; data.d37 = d37; data.d38 = d38; data.d39 = d39; data.d40 = d40; data.d41 = d41; data.d42 = d42; data.d43 = d43; data.d44 = d44; data.d45 = d45; data.d46 = d46; data.d47 = d47; data.d48 = d48; data.d49 = d49; data.d50 = d50; data.d51 = d51; data.d52 = d52; data.d53 = d53; data.d54 = d54; data.d55 = d55; data.d56 = d56; data.d57 = d57; data.d58 = d58; data.d59 = d59; data.d60 = d60;
	vecdata.push_back(data);
}
vector<Data> vecUP;
void readUP(){
	ifstream fin(UP);
	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60;
	string s;
	while (!fin.eof()){
		fin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19 >> d20 >> d21 >> d22 >> d23 >> d24 >> d25 >> d26 >> d27 >> d28 >> d29 >> d30 >> d31 >> d32 >> d33 >> d34 >> d35 >> d36 >> d37 >> d38 >> d39 >> d40 >> d41 >> d42 >> d43 >> d44 >> d45 >> d46 >> d47 >> d48 >> d49 >> d50 >> d51 >> d52 >> d53 >> d54 >> d55 >> d56 >> d57 >> d58 >> d59 >> d60;
		getline(fin, s);
		mypushback(vecUP, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60);
	}
	cout << "vecUP pushback ok..." << endl;
	/*ofstream fout(test);
	for (vector<Data>::iterator it = vecUP.begin(); it != vecUP.end(); it++){
	fout << it->d1 << "\t" << it->d2 << "\t" << it->d3 << endl;
	}
	fout.close();*/
	fin.close();
}
vector<Data> vecLP;
void readLP(){
	ifstream fin(LP);
	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60;
	string s;
	while (!fin.eof()){
		fin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19 >> d20 >> d21 >> d22 >> d23 >> d24 >> d25 >> d26 >> d27 >> d28 >> d29 >> d30 >> d31 >> d32 >> d33 >> d34 >> d35 >> d36 >> d37 >> d38 >> d39 >> d40 >> d41 >> d42 >> d43 >> d44 >> d45 >> d46 >> d47 >> d48 >> d49 >> d50 >> d51 >> d52 >> d53 >> d54 >> d55 >> d56 >> d57 >> d58 >> d59 >> d60;
		getline(fin, s);
		mypushback(vecLP, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60);
	}
	cout << "vecLP pushback ok..." << endl;
	/*ofstream fout(test);
	for (vector<Data>::iterator it = vecLP.begin(); it != vecLP.end(); it++){
	fout << it->d1 << "\t" << it->d2 << "\t" << it->d3 << endl;
	}
	fout.close();*/
	fin.close();
}
vector<Data> vecLS;
void readLS(){
	ifstream fin(LS);
	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60;
	string s;
	while (!fin.eof()){
		fin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19 >> d20 >> d21 >> d22 >> d23 >> d24 >> d25 >> d26 >> d27 >> d28 >> d29 >> d30 >> d31 >> d32 >> d33 >> d34 >> d35 >> d36 >> d37 >> d38 >> d39 >> d40 >> d41 >> d42 >> d43 >> d44 >> d45 >> d46 >> d47 >> d48 >> d49 >> d50 >> d51 >> d52 >> d53 >> d54 >> d55 >> d56 >> d57 >> d58 >> d59 >> d60;
		getline(fin, s);
		mypushback(vecLS, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36, d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d49, d50, d51, d52, d53, d54, d55, d56, d57, d58, d59, d60);
	}
	cout << "vecLS pushback ok..." << endl;
	/*ofstream fout(test);
	for (vector<Data>::iterator it = vecLS.begin(); it != vecLS.end(); it++){
		fout << it->d1 << "\t" << it->d2 << "\t" << it->d3 << endl;
	}
	fout.close();*/
	fin.close();
}
#define alpha 0.2
#define M_PI 3.14159265358979323846
const double EARTH_RADIUS = 6371.004;//地球半径
double rad(double d)
{
	return d * M_PI / 180.0;
}
double GetDistance(double lat1, double lng1, double lat2, double lng2)
{
	double radLat1 = rad(lat1);
	double radLat2 = rad(lat2);
	double a = radLat1 - radLat2;
	double b = rad(lng1) - rad(lng2);

	double s = 2 * asin(sqrt(pow(sin(a / 2), 2) + cos(radLat1)*cos(radLat2)*pow(sin(b / 2), 2)));
	s = s * EARTH_RADIUS;
	return s;
}
double calcEachline(vector<Data> &v1, vector<Data> &v2, int m, int n){
	double x = (v1[m].d1 - v2[n].d1)*(v1[m].d1 - v2[n].d1) + (v1[m].d2 - v2[n].d2)*(v1[m].d2 - v2[n].d2) + (v1[m].d3 - v2[n].d3)*(v1[m].d3 - v2[n].d3) + (v1[m].d4 - v2[n].d4)*(v1[m].d4 - v2[n].d4) + (v1[m].d5 - v2[n].d5)*(v1[m].d5 - v2[n].d5) + (v1[m].d6 - v2[n].d6)*(v1[m].d6 - v2[n].d6) + (v1[m].d7 - v2[n].d7)*(v1[m].d7 - v2[n].d7) + (v1[m].d8 - v2[n].d8)*(v1[m].d8 - v2[n].d8) + (v1[m].d9 - v2[n].d9)*(v1[m].d9 - v2[n].d9) + (v1[m].d10 - v2[n].d10)*(v1[m].d10 - v2[n].d10) + (v1[m].d11 - v2[n].d11)*(v1[m].d11 - v2[n].d11) + (v1[m].d12 - v2[n].d12)*(v1[m].d12 - v2[n].d12) + (v1[m].d13 - v2[n].d13)*(v1[m].d13 - v2[n].d13) + (v1[m].d14 - v2[n].d14)*(v1[m].d14 - v2[n].d14) + (v1[m].d15 - v2[n].d15)*(v1[m].d15 - v2[n].d15) + (v1[m].d16 - v2[n].d16)*(v1[m].d16 - v2[n].d16) + (v1[m].d17 - v2[n].d17)*(v1[m].d17 - v2[n].d17) + (v1[m].d18 - v2[n].d18)*(v1[m].d18 - v2[n].d18) + (v1[m].d19 - v2[n].d19)*(v1[m].d19 - v2[n].d19) + (v1[m].d20 - v2[n].d20)*(v1[m].d20 - v2[n].d20) + (v1[m].d21 - v2[n].d21)*(v1[m].d21 - v2[n].d21) + (v1[m].d22 - v2[n].d22)*(v1[m].d22 - v2[n].d22) + (v1[m].d23 - v2[n].d23)*(v1[m].d23 - v2[n].d23) + (v1[m].d24 - v2[n].d24)*(v1[m].d24 - v2[n].d24) + (v1[m].d25 - v2[n].d25)*(v1[m].d25 - v2[n].d25) + (v1[m].d26 - v2[n].d26)*(v1[m].d26 - v2[n].d26) + (v1[m].d27 - v2[n].d27)*(v1[m].d27 - v2[n].d27) + (v1[m].d28 - v2[n].d28)*(v1[m].d28 - v2[n].d28) + (v1[m].d29 - v2[n].d29)*(v1[m].d29 - v2[n].d29) + (v1[m].d30 - v2[n].d30)*(v1[m].d30 - v2[n].d30) + (v1[m].d31 - v2[n].d31)*(v1[m].d31 - v2[n].d31) + (v1[m].d32 - v2[n].d32)*(v1[m].d32 - v2[n].d32) + (v1[m].d33 - v2[n].d33)*(v1[m].d33 - v2[n].d33) + (v1[m].d34 - v2[n].d34)*(v1[m].d34 - v2[n].d34) + (v1[m].d35 - v2[n].d35)*(v1[m].d35 - v2[n].d35) + (v1[m].d36 - v2[n].d36)*(v1[m].d36 - v2[n].d36) + (v1[m].d37 - v2[n].d37)*(v1[m].d37 - v2[n].d37) + (v1[m].d38 - v2[n].d38)*(v1[m].d38 - v2[n].d38) + (v1[m].d39 - v2[n].d39)*(v1[m].d39 - v2[n].d39) + (v1[m].d40 - v2[n].d40)*(v1[m].d40 - v2[n].d40) + (v1[m].d41 - v2[n].d41)*(v1[m].d41 - v2[n].d41) + (v1[m].d42 - v2[n].d42)*(v1[m].d42 - v2[n].d42) + (v1[m].d43 - v2[n].d43)*(v1[m].d43 - v2[n].d43) + (v1[m].d44 - v2[n].d44)*(v1[m].d44 - v2[n].d44) + (v1[m].d45 - v2[n].d45)*(v1[m].d45 - v2[n].d45) + (v1[m].d46 - v2[n].d46)*(v1[m].d46 - v2[n].d46) + (v1[m].d47 - v2[n].d47)*(v1[m].d47 - v2[n].d47) + (v1[m].d48 - v2[n].d48)*(v1[m].d48 - v2[n].d48) + (v1[m].d49 - v2[n].d49)*(v1[m].d49 - v2[n].d49) + (v1[m].d50 - v2[n].d50)*(v1[m].d50 - v2[n].d50) + (v1[m].d51 - v2[n].d51)*(v1[m].d51 - v2[n].d51) + (v1[m].d52 - v2[n].d52)*(v1[m].d52 - v2[n].d52) + (v1[m].d53 - v2[n].d53)*(v1[m].d53 - v2[n].d53) + (v1[m].d54 - v2[n].d54)*(v1[m].d54 - v2[n].d54) + (v1[m].d55 - v2[n].d55)*(v1[m].d55 - v2[n].d55) + (v1[m].d56 - v2[n].d56)*(v1[m].d56 - v2[n].d56) + (v1[m].d57 - v2[n].d57)*(v1[m].d57 - v2[n].d57) + (v1[m].d58 - v2[n].d58)*(v1[m].d58 - v2[n].d58) + (v1[m].d59 - v2[n].d59)*(v1[m].d59 - v2[n].d59) + (v1[m].d60 - v2[n].d60)*(v1[m].d60 - v2[n].d60);
	return x;
}
#define M 1083
#define N 383
struct patter{
	int no;
	double value;
};
vector<patter> pa;
void papushback(vector<patter> &paa, const int& k, const double& va){
	patter ppa;
	ppa.no = k; ppa.value = va;
	paa.push_back(ppa);
}
void calcMatrix(){
	ofstream fout(test);
	std::vector<std::vector<std::vector<double> > > vecDG(M, vector<vector<double> >(N, vector<double>(N)));
	/*int ***grayScale = new int **[M];
	for (int i = 0; i < M; i++)
	{
	grayScale[i] = new int*[N];
	for (j = 0; j < N; j++)
	{
	grayScale[i][j] = new int[N];
	}
	}*/
	map<double, int> mapDG;
	for (int i = 0; i != vecUP.size(); ++i){
		for (int j = 0; j != vecLP.size(); ++j){
			vecDG[i][j][0] = alpha*calcEachline(vecUP, vecLP, i, j) + (1 - alpha)*calcEachline(vecLP, vecLS, j, 0);
			for (int k = 1; k != vecLS.size(); ++k){
				vecDG[i][j][k] = alpha*calcEachline(vecUP, vecLP, i, j) + (1 - alpha)*calcEachline(vecLP, vecLS, j, k);
				mapDG.insert(pair<double, int>(vecDG[i][j][k], k));
				if (vecDG[i][j][k] > vecDG[i][j][k - 1]){
					swap(vecDG[i][j][k], vecDG[i][j][k - 1]);
				}
			}
			for (int k = 0; k < 20; ++k){
				if (k == 19)
					fout << mapDG[vecDG[i][j][k]] << endl;
				else
					fout << mapDG[vecDG[i][j][k]] << "\t";
			}
		}
	}
	cout << "calcMatrix: 1.calculate ok... 2.Ranking ok..... 3.Writing ok..." << endl;
	fout.close();
}
int main(){
	/*ofstream fout(test);
	for (int i = 1; i <= K; i++){
	fout << " (v1[m].d" << i << " - v2[n].d" << i << ")*(v1[m].d" << i << " - v2[n].d" << i << ")+";
	}
	fout.close();*/
	//cout << GetDistance(40.700503, -73.808565, 40.740693, -73.997097) << endl;
	readUP();
	readLP();
	readLS();
	calcMatrix();
	return 0;
}