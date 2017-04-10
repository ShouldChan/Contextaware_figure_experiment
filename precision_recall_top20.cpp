//3.计算precision&recall
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define test "E:\\topk\\test_timeofday.txt"
#define topk "E:\\topk\\4.3.2\\top5_timeofday.txt"
#define testcount "E:\\topk\\4.3.2\\c+t_testnumcount_top5.txt"
#define hitcount "E:\\topk\\4.3.2\\c+t_hitcount_top5.txt"
#define K 5

struct Data{
	int user; int npoi;
};
void mypushback(vector<Data> &vecnpoi, const int& u, const int&np){
	Data da;
	da.user = u;	da.npoi = np;
	vecnpoi.push_back(da);
}
//struct Recm{
//	int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20;
//};
//void recpushback(vector<Recm> &vecrec, const int &rr1, const int &rr2, const int &rr3, const int &rr4, const int &rr5, const int &rr6, const int &rr7, const int &rr8, const int &rr9, const int &rr10, const int &rr11, const int &rr12, const int &rr13, const int &rr14, const int &rr15, const int &rr16, const int &rr17, const int &rr18, const int &rr19, const int &rr20){
//	Recm da;
//	da.r1 = rr1; da.r2 = rr2; da.r3 = rr3; da.r4 = rr4; da.r5 = rr5; da.r6 = rr6; da.r7 = rr7; da.r8 = rr8; da.r9 = rr9; da.r10 = rr10; da.r11 = rr11; da.r12 = rr12; da.r13 = rr13; da.r14 = rr14; da.r15 = rr15; da.r16 = rr16; da.r17 = rr17; da.r18 = rr18; da.r19 = rr19; da.r20 = rr20;
//	vecrec.push_back(da);
//}
//vecNpoi是测试集里的npoi
vector<Data> vecNpoi;
//vector<vector<int> > Recm;//(1082,vector<int>(20));
//vector<Recm> vecTop;
int Recm[1082][K] = { 0 };
void read(){
	ifstream fin(test);
	string s;
	if (!fin.good()){
		cout << "wrong open " << endl;
		exit(1);
	}
	while (!fin.eof()){
		string str[15];
		int user, npoi;
		fin >> user >> str[0] >> str[1] >> str[2] >> str[3] >> str[4] >> str[5] >> str[6] >> str[7] >> npoi >> str[8] >> str[9] >> str[10] >> str[11] >> str[12] >> str[13] >> str[14];
		getline(fin, s);
		mypushback(vecNpoi, user, npoi);
	}
	cout << "test: vecNpoi pushback ok..." << endl;
	//read topk
	ifstream ffin(topk);
	if (!ffin.good()){
		cout << "wrong open " << endl;
		exit(1);
	}
	string ss; int i = 0;
	while (!ffin.eof()){
		//int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20;
		//int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r13 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0;
		//ffin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6 >> r7 >> r8 >> r9 >> r10 >> r11 >> r12 >> r13 >> r14 >> r15 >> r16 >> r17 >> r18 >> r19 >> r20;
		ffin >> Recm[i][0] >> Recm[i][1] >> Recm[i][2] >> Recm[i][3] >> Recm[i][4];
		//ffin >> Recm[i][0] >> Recm[i][1] >> Recm[i][2] >> Recm[i][3] >> Recm[i][4] >> Recm[i][5] >> Recm[i][6] >> Recm[i][7] >> Recm[i][8] >> Recm[i][9];
		//ffin >> Recm[i][0] >> Recm[i][1] >> Recm[i][2] >> Recm[i][3] >> Recm[i][4] >> Recm[i][5] >> Recm[i][6] >> Recm[i][7] >> Recm[i][8] >> Recm[i][9] >> Recm[i][10] >> Recm[i][11] >> Recm[i][12] >> Recm[i][13] >> Recm[i][14] >> Recm[i][15] >> Recm[i][16] >> Recm[i][17] >> Recm[i][18] >> Recm[i][19];
		getline(ffin, ss);
		//recpushback(vecTop, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20);
		//Recm[i][0] = r1; Recm[i][1] = r2; Recm[i][2] = r3; Recm[i][3] = r4; Recm[i][4] = r5; Recm[i][5] = r6; Recm[i][6] = r7; Recm[i][7] = r8; Recm[i][8] = r9; Recm[i][9] = r10; Recm[i][10] = r11; Recm[i][11] = r12; Recm[i][12] = r13; Recm[i][13] = r14; Recm[i][14] = r15; Recm[i][15] = r16; Recm[i][16] = r17; Recm[i][17] = r18; Recm[i][18] = r19; Recm[i][19] = r20;
		i++;
	}
	cout << "topk: vecRecm pushback ok..." << endl;
	/*ofstream fout(out);
	for (int i = 0; i < 1082; i++){
	for (int j = 0; j < 20; j++){
	if (j == 19)
	fout << Recm[i][j] << endl;
	else
	fout << Recm[i][j] << "\t";
	}
	}
	fout.close();*/
	fin.close();
	ffin.close();
}

void calc(){
	vector<int> count(1082, 0);
	vector<int> numTest(1082, 1);
	for (int i = 0; i != vecNpoi.size() - 1; i++){
		for (int j = 0; j < K; j++){
			if (Recm[vecNpoi[i].user - 1][j] == vecNpoi[i].npoi){
				count[vecNpoi[i].user - 1]++;
				break;
			}
		}
		if (vecNpoi[i].user == vecNpoi[i + 1].user)
			numTest[vecNpoi[i].user - 1]++;
	}
	cout << "count ok..." << endl;
	ofstream testnum(testcount);
	ofstream hitout(hitcount);
	double precision = 0.0;
	double recall = 0.0;
	for (int i = 0; i != count.size(); i++){
		precision += (1.0*count[i]) / (1.0 * K);
		hitout << i + 1 << "\t" << count[i] << endl;
	}
	cout << "precision: " << precision / 1082 << endl;
	for (int i = 0; i != numTest.size(); i++){
		recall += (1.0*count[i]) / (1.0*numTest[i]);
		testnum << i + 1 << "\t" << numTest[i] << endl;
	}
	cout << "recall: " << recall / 1082 << endl;
	cout << "write ok..." << endl;
	testnum.close();
	hitout.close();
}
int main(){
	/*ofstream fout(out);
	for (int i = 0; i < 20; i++){
	fout << ">>Recm[i][" << i << "]";
	}*/
	read();
	calc();
	return 0;
}

