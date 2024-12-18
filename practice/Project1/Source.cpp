#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void main() {
	//creates empty vector
	//Time complexity: O(1)
	//Space complexity : O(1)
	std::vector<int> v;  // Creates an empty vector



	//Time complexity: O(n)
	//Space complexity : O(n)
	std::vector<int> v1(5);  // Vector of size 5 initialized with 0

	//Initialization with Initializer List
	//Time complexity : O(n)
	//Space complexity : O(n)
	std::vector<int> v2 = { 1, 2, 3, 4, 5 };  // Initialize with values


	//copy constructor
	//Time complexity: O(n)
	//Space complexity : O(n)
	std::vector<int> v3 = { 1, 2, 3 };
	std::vector<int> v4(v3);  // Copy of v1


	//move constructor
	//Time complexity : O(1)
	//Space complexity : O(1)
	std::vector<int> v5 = { 1, 2, 3 };
	std::vector<int> v6(std::move(v5));  // v5's resources transferred to v6

	//Size and capacity
	//size
  //Time complexity: O(1)
  //Space complexity: O(1)
  //capacity 
	//Time complexity: O(1)
	//Space complexity: O(1)

	std::vector<int> v7 = { 1, 2, 3 };
	std::cout << "Size: " << v7.size() << "\n";         // Outputs 3
	std::cout << "Capacity: " << v7.capacity() << "\n"; // Outputs >= 3




	// reserve
	//time O(n)
	// space O(n)
	std::vector<int> v8;
    v8.reserve(10); // Allocate memory for 10 elements
    std::cout << "Capacity: " << v8.capacity() << std::endl;

	//push_back

	//time O(1)
	//space O(n)
	std::vector<int> v9;
    v9.push_back(10);
    v9.push_back(20);
    for (int i : v9) std::cout << i << " "; // Output: 10 20

	//insert
	//time : O(n)
	//space: O(n)
	std::vector<int> v10 = {1, 2, 3};
    v10.insert(v10.begin() + 1, 99);
    for (int i : v10) std::cout << i << " "; // Output: 1 99 2 3


	//erase
	//time O(n)
	//space O(1)
	std::vector<int> v11 = {1, 2, 3};
    v11.erase(v11.begin() + 1);
    for (int i : v11) std::cout << i << " "; // Output: 1 3


	//sort
	//Time Complexity: O(nlogn), where n n is the number of elements.
	//Space Complexity: O(logn) (for recursion stack space).
    std::vector<int> v12 = {3, 1, 2};
    std::sort(v12.begin(), v.end());
    for (int i : v12) std::cout << i << " "; // Output: 1 2 3

	//swap
	//time O(1)
	//space O(1)
	std::vector<int> v13 = {1, 2, 3};
    std::vector<int> v23 = {4, 5, 6};
    v13.swap(v23);
    for (int i : v13) std::cout << i << " "; // Output: 4 5 6
}