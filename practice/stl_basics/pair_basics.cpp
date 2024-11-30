#include<iostream>
#include<utility>
using namespace std;

int main() {
	pair<int, int> p = { 1,2 };
	cout << p.first << " " << p.second << endl;
	pair<int, pair<int, int>> p2 = { 1,{2,3} };

	cout << p2.first << "" << p2.second.first << "" << p2.second.second << endl;
	pair<int, int> p3[] = { {1,2},{4,6},{7,8} };
	cout << p3[0].first << " " << p3[1].first;
	return 0;

}