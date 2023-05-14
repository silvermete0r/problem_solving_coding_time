#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int>& vec, int i, int n) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	// If left child is larger than root
	if (left < n && vec[left] > vec[largest]) {
		largest = left;
	}

	// If right child is larger than root
	if (right < n && vec[right] > vec[largest]) {
		largest = right;
	}

	// If largest is not the root
	if (largest != i) {
		// Swap largest with root
		int temp = vec[i];
		vec[i] = vec[largest];
		vec[largest] = temp;

		// Heapify the affected subtree
		heapify(vec, largest, n);
	}
}

void heapSort(vector<int> &vec, int n) {
	// Build heap
	for (int i = (n / 2) - 1; i >= 0; i--) {
		heapify(vec, i, n);
	}

	// Heap Sort
	for (int i = n - 1; i > 0; i--) {
		// Swap root with the last element
		int temp = vec[0];
		vec[0] = vec[i];
		vec[i] = temp;

		// Heapify the root element
		heapify(vec, 0, i);
	}
}

int main()
{
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	
	vector<int> vec(n);
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	cout << "Unsorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}
	cout << "\n";

	heapSort(vec, n);

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
