#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n = 10, m = 20;
	vector<vector<int>>v8(n,vector<int>(m));
	cout << v8.size()<<endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			v8[i][j] = 0;
		}
	}
	cout << v8[0].size() << endl;
	return 0;
}