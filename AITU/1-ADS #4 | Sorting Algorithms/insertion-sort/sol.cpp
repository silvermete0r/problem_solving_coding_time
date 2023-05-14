#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &vec, int n) {
	for (int i = 1; i < n; i++) {
		int key = vec[i];
		int j = i - 1;
		
		while (j >= 0 && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
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

	insertionSort(vec, n);

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
