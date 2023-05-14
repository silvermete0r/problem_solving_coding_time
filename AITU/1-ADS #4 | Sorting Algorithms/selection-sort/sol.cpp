#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &vec, int n) {
	for (int i = 0; i < n-1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (vec[j] < vec[minIndex]) {
				minIndex = j;
			}
		}
		int temp = vec[minIndex];
		vec[minIndex] = vec[i];
		vec[i] = temp;
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

	selectionSort(vec, n);

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
