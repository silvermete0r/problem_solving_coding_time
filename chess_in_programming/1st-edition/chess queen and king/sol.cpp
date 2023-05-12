#include <bits/stdc++.h>

using namespace std;

// wk - white king, wq - white queen, bk - black king
bool beats(string wk, string wq, string bk) {
  int xq = wq[1]-'0', yq = wq[0]-'a'+1, xwk = wk[1]-'0', ywk = wk[0]-'a'+1, xbk = bk[1]-'0', ybk = bk[0]-'a'+1;
  if(xq < 0 || xq > 8 || yq < 0 || yq > 8 || xwk < 0 || xwk > 8 || ywk < 0 || ywk > 8 || xbk < 0 || xbk > 8 || ybk < 0 || ybk > 8) {
    return false;
  }
  if((xq == xbk && (xwk!=xbk || !(yq<=ywk && ywk<=ybk || yq>=ywk && ywk>=ybk)) || (yq == ybk && (ywk!=ybk || !(xq<=xwk && xwk<=xbk || xq>=xwk && xwk>=xbk))))) return true;
  if(abs(xq - xbk) == abs(yq - ybk)) {
    int tx=xq, ty=yq;
    if(xq<xbk && yq<ybk) {
      for(int i=1; i<abs(xq - xbk); i++) {
        if(tx+i == xwk && ty+i == ywk) return false;
      }
    } else if(xq<xbk && yq>ybk) {
      for(int i=1; i<abs(xq - xbk); i++) {
        if(tx+i == xwk && ty-i == ywk) return false;
      }
    } else if(xq>xbk && yq<ybk) {
      for(int i=1; i<abs(xq - xbk); i++) {
        if(tx-i == xwk && ty+i == ywk) return false;
      }
    } else {
      for(int i=1; i<abs(xq - xbk); i++) {
        if(tx-i == xwk && ty-i == ywk) return false;
      }
    }
    return true;
  }
  return false;
}

int main() {
  string s;
  getline(cin, s);
  if(s.size() != 8) cout<<"NO";
  if(beats(s.substr(0,2), s.substr(3,2), s.substr(6,2))) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
