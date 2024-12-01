#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Student
{
public:
	string name;
	int age;
	char grade;

	Student(string name, int age, char grade) : name{ name }, age{ age }, grade{ grade } {}
};

int main() {
	vector<Student> students = {
		Student("bob",12,'A'),
		Student("alice", 13, 'B'),
		Student("charlie",13,'B'),
		Student("ram",12,'A'),
		Student("randeep",12,'C'),
	};

	sort(students.begin(), students.end(), [](const Student& s1, Student& s2) {
		if (s1.grade != s2.grade) {
			return s1.grade > s2.grade; // 'A' > 'B' > 'C' > 'D' > 'F'
		}

		// Secondary sort: compare by age (ascending order)
		if (s1.age != s2.age) {
			return s1.age < s2.age; // younger first
		}

		// Tertiary sort: compare by name (lexicographical order)
		return s1.name < s2.name; // alphabetical order
		});
	for (const auto& student : students) {
		cout << student.name << ", " << student.age << ", " << student.grade << endl;
	}

}