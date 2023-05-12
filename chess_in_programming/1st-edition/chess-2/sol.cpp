#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
  if(n<=1) return 1;
  return n*fact(n-1);
}

int main() {
  int n, k;
  cin>>n>>k;
  if(k>n) {
    cout<<0;
  } else {
    int v = fact(n), m = fact(n-k); 
    cout<<(v*v)/(m*m*fact(k));
  }
  return 0;
}
