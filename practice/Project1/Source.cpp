#include<vector>
#include<iostream>
using namespace std;

void main() {
	//creates empty vector
	//Time complexity: O(1)
	//Space complexity : O(1)
	std::vector<int> v;  // Creates an empty vector



	//Time complexity: O(n)
	//Space complexity : O(n)
	std::vector<int> v(5);  // Vector of size 5 initialized with 0

	//Initialization with Initializer List
	//Time complexity : O(n)
	//Space complexity : O(n)
	std::vector<int> v = { 1, 2, 3, 4, 5 };  // Initialize with values


	//copy constructor
	//Time complexity: O(n)
	//Space complexity : O(n)
	std::vector<int> v1 = { 1, 2, 3 };
	std::vector<int> v2(v1);  // Copy of v1


	//move constructor
	//Time complexity : O(1)
	//Space complexity : O(1)
	std::vector<int> v1 = { 1, 2, 3 };
	std::vector<int> v2(std::move(v1));  // v1's resources transferred to v2

	//Size and capacity
	//size
  //Time complexity: O(1)
  //Space complexity: O(1)
  //capacity 
	//Time complexity: O(1)
    //Space complexity: O(1)

	std::vector<int> v = { 1, 2, 3 };
	std::cout << "Size: " << v.size() << "\n";         // Outputs 3
	std::cout << "Capacity: " << v.capacity() << "\n"; // Outputs >= 3



	











}