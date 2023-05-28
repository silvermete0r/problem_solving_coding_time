#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long X, K, C;
    cin >> X >> K >> C;
    long long cycle_time = 3*X + 3 + K;
    long long complete_cycles = C / cycle_time;
    long long remaining_time = C % cycle_time;
    long long additional_laps = 0;
    
    if (remaining_time >= X + X + 1 + X + 2) {
        additional_laps = 3;
    } else if (remaining_time >= X + X + 1) {
        additional_laps = 2;
    } else if (remaining_time >= X) {
        additional_laps = 1;
    }
    
    cout << complete_cycles * 3 + additional_laps << endl;
    return 0;
}
