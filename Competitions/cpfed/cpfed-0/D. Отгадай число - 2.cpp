#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int left = 1, right = n;
    while (true) {
        int mid = ceil((double)(left + right) / 2.0);
        cout << mid << endl;
        fflush(stdout);
 
        string response;
        cin >> response;
        if (response == "<") {
            right = mid - 1;
        } else {
            left = mid;
        }
 
        if (left == right) {
            cout << "! " << left << endl;
            fflush(stdout);
            break;
        }
    }
 
    return 0;
}