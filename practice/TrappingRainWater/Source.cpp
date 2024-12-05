#include<iostream>
#include<vector>

using namespace std;

int trappedWater(vector<int>& vec) {
	int len = vec.size();
	vector<int> left(len);
	vector<int> right(len);
	
	left[0] = vec[0];
	right[len-1] = vec[len - 1];
	for (int i = 1; i < len; i++) {
		left[i] = max(left[i - 1], vec[i]);
	}
	for (int i = len - 2; i > 0; i--) {
		right[i] = max(right[i + 1], vec[i]);
	}
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum +=  min(left[i], right[i]) - vec[i];
	}
	return sum;
}
int main() {
	vector <int> vec = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	cout << trappedWater(vec) << endl;
}