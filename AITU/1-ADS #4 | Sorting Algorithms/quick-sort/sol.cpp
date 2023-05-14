#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& vec, int low, int high) {
	int pivot = vec[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (vec[j] <= pivot) {
			i++;
			int temp = vec[i];
			vec[i] = vec[j];
			vec[j] = temp;
		}
	}
	int temp = vec[i + 1];
	vec[i + 1] = vec[high];
	vec[high] = temp;
	return i + 1;
}

void quickSort(vector<int> &vec, int low, int high) {
	if (low < high) {
		int pivot = partition(vec, low, high);
		quickSort(vec, low, pivot - 1);
		quickSort(vec, pivot + 1, high);
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

	quickSort(vec, 0, n-1);

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
