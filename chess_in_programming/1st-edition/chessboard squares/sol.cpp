#include <bits/stdc++.h>
using namespace std;

bool isWhite(string s){
  int x1, x2;
  x1 = s[0] - 'A' + 1;
  x2 = s[1] - '0';
  return (x1+x2)%2;
}

int main() {
  string s;
  cin>>s;
  if(isWhite(s)) cout<<"WHITE";
  else cout<<"BLACK";
  return 0;
}
