#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

pair<int, int> twosum(const vector<int>& vec, int sum) {
	unordered_map<int, int> map;
	int len = vec.size();
	for (int i = 0; i < len; i++){
			int num = vec[i];
			int comp = sum - num;
			if (map.count(comp) > 0) {
				return { map[comp],i };
			}
			map.insert({ vec[i],i });
	}
	return { -1,-1 };

}
	int main() {
		vector<int> v = { 1,3,6,7 };
		pair<int, int> p = twosum(v, 8);

		cout << p.first << "," << p.second;
	}