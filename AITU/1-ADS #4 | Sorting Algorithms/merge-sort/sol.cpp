#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& vec, int low, int mid, int high) {
	int n1 = mid - low + 1;
	int n2 = high - mid;

	vector<int> leftVec(n1), rightVec(n2);

	for (int i = 0; i < n1; i++) {
		leftVec[i] = vec[low + i];
	}

	for (int i = 0; i < n2; i++) {
		rightVec[i] = vec[mid + 1 + i];
	}

	int i = 0, j = 0, k = low;

	while (i < n1 && j < n2) {
		if (leftVec[i] <= rightVec[j]) {
			vec[k] = leftVec[i];
			i++;
		}
		else {
			vec[k] = rightVec[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		vec[k] = leftVec[i];
		i++;
		k++;
	}

	while (j < n2) {
		vec[k] = rightVec[j];
		j++;
		k++;
	}

}

void mergeSort(vector<int>& vec, int low, int high) {
	if (low < high) {
		int mid = low+(high-low) / 2;
		mergeSort(vec, low, mid);
		mergeSort(vec, mid + 1, high);
		merge(vec, low, mid, high);
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

	mergeSort(vec, 0, n-1);

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
