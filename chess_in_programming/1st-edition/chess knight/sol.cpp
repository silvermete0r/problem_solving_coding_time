#include <bits/stdc++.h>
using namespace std;

void letter(int x){
  char s=(char)('a'+x-1);
  cout<<s;
}

int main() {
  string s;
  cin >> s;
  int x = s[0] - 'a' + 1;
  int y = s[1] - '0';
  if(y-1>0 && y-1<9 && x-2>0 && x-2<9){
    letter(x-2);
    cout<<y-1<<endl;
  }
  if(y+1>0 && y+1<9 && x-2>0 && x-2<9){
    letter(x-2);
    cout<<y+1<<endl;
  }
  if(y-2>0 && y-2<9 && x-1>0 && x-1<9){
    letter(x-1);
    cout<<y-2<<endl;
  }
  if(y+2>0 && y+2<9 && x-1>0 && x-1<9){
    letter(x-1);
    cout<<y+2<<endl;
  }
  if(y-2>0 && y-2<9 && x+1>0 && x+1<9){
    letter(x+1);
    cout<<y-2<<endl;
  }
  if(y+2>0 && y+2<9 && x+1>0 && x+1<9){
    letter(x+1);
    cout<<y+2<<endl;
  }
  if(y-1>0 && y-1<9 && x+2>0 && x+2<9){
    letter(x+2);
    cout<<y-1<<endl;
  }
  if(y+1>0 && y+1<9 && x+2>0 && x+2<9){
    letter(x+2);
    cout<<y+1<<endl;
  }
  return 0;
}
