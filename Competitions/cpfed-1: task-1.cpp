#include <bits/stdc++.h> 

using namespace std;

int main() {
  int n, h=5;
  cin>>n;
  h += n;
  if(h<0) {
    h = 24 + h;
  }
  h %= 24;
  if(h<10) cout<<0;
  cout<<h<<":00";
  return 0;
}
