#include <bits/stdc++.h>
using namespace std;

const int MAXN = 12;

int binpow(int a, int n) {
    int res = 1;
    while (n != 0) {
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int get_size(int num) {
    int size = 0;
    while (num) {
        size++;
        num /= 10;
    }
    return size;
}

void radix_sort(vector<int>& arr) {
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
        maxLen = max(maxLen, get_size(arr[i]));
    }

    int base = 10;

    for (int i = 0; i < maxLen; i++) {
        vector<vector<int>> bucket(base); 
        for (int& a : arr) {
            int rank = (a / binpow(10, i)) % base;
            bucket[rank].push_back(a);
        }
        int ind = 0;
        for (int j = 0; j < base; j++) {
            for (const auto& el : bucket[j]) {
                arr[ind++] = el;
            }
        }
    }
}

int main() {
    srand(time(0)); 
    
    vector<int> arr(MAXN);
    for (int i = 0; i < MAXN; i++) arr[i] = rand() % 10000;  
    cout << "Initial state (array): ";
    for (int i = 0; i < MAXN; i++) cout << arr[i] << " ";
    cout << "\n";

    radix_sort(arr);
    
    cout << "Sorted state (array): ";
    for (int i = 0; i < MAXN; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
