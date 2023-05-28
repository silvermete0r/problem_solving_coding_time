#include <bits/stdc++.h>
using namespace std;
 
pair<int, int> findTwoItemsForOneBag(vector<int>& bags, vector<int>& items) {
    int n = bags.size();
    int m = items.size();
 
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = 0; k < n; k++) {
                if (items[i] + items[j] == bags[k]) {
                    return {i, j};
                }
            }
        }
    }
 
    return {-1, -1};
}
 
int main() {
    int N;
    cin >> N;
    vector<int> c(N), a(N + 1);
    
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }
    
    for (int i = 0; i < N + 1; i++) {
        cin >> a[i];
    }
    
    pair<int, int> result = findTwoItemsForOneBag(c, a);
    cout << result.first << " " << result.second << endl;
    
    return 0;
}
