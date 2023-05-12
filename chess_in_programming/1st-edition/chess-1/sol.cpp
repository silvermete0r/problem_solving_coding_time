#include <bits/stdc++.h>
using namespace std;

bool correct(string s){
  if(s.size() != 5) return false;
  if(s[2] != '-') return false;
  if(s[1] < '1' || s[1] > '8') return false;
  if(s[4] < '1' || s[4] > '8') return false;
  if(s[0] < 'A' || s[0] > 'H') return false;
  if(s[3] < 'A' || s[3] > 'H') return false;
  return true;
}

bool knightMove(string s){
  int x1, x2, y1, y2;
  x1 = s[0] - 'A' + 1;
  x2 = s[3] - 'A' + 1;
  y1 = s[1] - '0';
  y2 = s[4] - '0';
  if(abs(x1-x2)==1 && abs(y1-y2)==2) return true;
  if(abs(x1-x2)==2 && abs(y1-y2)==1) return true;
  return false;
}

int main() {
  string str;
  cin>>str;
  if(correct(str))
    if(knightMove(str)) cout<<"YES"<<endl;
    else cout<<"NO";
  else cout<<"ERROR";
  return 0;
}
