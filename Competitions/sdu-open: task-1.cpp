#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int g = ceil(n / 12.0);
    int s = ceil(n / 4.0) - g; 
    int b = ceil(n / 2.0) - g - s; 
 
    cout << g << " " << s << " " << b << endl;
 
    return 0;
}
