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




	// reserve
	//time O(n)
	// space O(n)
	std::vector<int> v;
    v.reserve(10); // Allocate memory for 10 elements
    std::cout << "Capacity: " << v.capacity() << std::endl;

	//push_back

	//time O(1)
	//space O(n)
   std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    for (int i : v) std::cout << i << " "; // Output: 10 20

	//insert
	//time : O(n)
	//space: O(n)
	std::vector<int> v = {1, 2, 3};
    v.insert(v.begin() + 1, 99);
    for (int i : v) std::cout << i << " "; // Output: 1 99 2 3


	//erase
	//time O(n)
	//space O(1)
	std::vector<int> v = {1, 2, 3};
    v.erase(v.begin() + 1);
    for (int i : v) std::cout << i << " "; // Output: 1 3


	//sort
	//Time Complexity: O(nlogn), where n n is the number of elements.
	//Space Complexity: O(logn) (for recursion stack space).
    std::vector<int> v = {3, 1, 2};
    std::sort(v.begin(), v.end());
    for (int i : v) std::cout << i << " "; // Output: 1 2 3

	//swap
	//time O(1)
	//space O(1)
	std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    v1.swap(v2);
    for (int i : v1) std::cout << i << " "; // Output: 4 5 6
}