#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
	string x, y;
	cin >>  x >> y;
	
	if(x.size() != y.size())
	    cout << "NO" << endl;
	
	else{
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	
	if(x == y)
	      cout << "YES" << endl;
	else
	      cout << "NO" << endl;
	}
    }
	
	return 0;
}
