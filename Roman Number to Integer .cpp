#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
    cin >> T;
    
    while(T--){
        string s;
        cin >> s;
	unordered_map<char, int> mp = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
	int res = mp[s.back()];
	for(int i = 0; i < s.size() - 1; i++) {
		if(mp[s[i]] < mp[s[i + 1]]) res -= mp[s[i]];
		else res += mp[s[i]];
	}
    
	cout <<  res << endl;
}
	return 0;
}
