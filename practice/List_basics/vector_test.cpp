#include<iostream>
#include<vector>
using namespace std;
class Test {
public:
	Test() {
		cout << "const test" << endl;
	}
};
int main() {
	vector<int> v;
	Test t;
	v.push_back(1);
	vector <Test> vec;
	vec.emplace_back(t);
	vector<int>::iterator it = v.begin();

	for (; it != v.end(); it++) {
		cout << *it<<endl;
	}
}