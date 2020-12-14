#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

bool comp1(pair<float, pair<int, int> >& a, pair<float, pair<int, int> >& b) {
	return a.first < b.first;
}

void task6_1(string filename1, string filename2) {
	ifstream fin(filename1);
	ofstream fout(filename2);
	vector< pair<float, pair<int, int> > > a;
	int n;
	fin >> n;
	int x, y;
	for (int i = 0; i < n; i++) {
		fin >> x >> y;
		a.push_back(make_pair(x * x + y * y, make_pair(x, y)));


	}
	fin.close();
	sort(a.begin(), a.end(), comp1);
	for (auto& i : a) {
		fout << i.second.first << " " << i.second.second << endl;
	}
	fout.close();
}

void task6_2(string filename1, string filename2) {
	ifstream fin(filename1);
	ofstream fout(filename2);
	int n;
	fin >> n;
	int tmp;
	set<int> S;
	for (int i = 0; i < n; i++) {
		fin >> tmp;
		auto ans = S.emplace(tmp);
		if (!ans.second) {
			fout << "YES" << endl;
		}
		else {
			fout << "NO" << endl;
		}
	}
	fin.close();
	fout.close();
}

void task6_3(string filename1, string filename2) {
	ifstream fin(filename1);
	ofstream fout(filename2);
	int n;
	fin >> n;
	map <string, string> s;
	for (int i = 0; i < n; i++) {
		string a, b;
		fin >> a >> b;
		s[a] = b;
		s[b] = a;
	}
	string c;
	fin >> c;
	fout << s[c] << endl;
	fin.close();
	fout.close();

}