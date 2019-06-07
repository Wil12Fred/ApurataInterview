#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int u = d = l = r = 0;
	int slen=s.length();
	for(int i = 0; i < slen; i++) {
		if(s[i] == 'U') {
		    u++;
		} else if(s[i] == 'R') {
		    r++;
		} else if(s[i] == 'L') {
		    l++;
		} else {
		    d++;
		}
	}
	int ans = abs(u-d) + abs(l-r);
	if (ans & 1) {
	    cout << -1 << endl;
	} else {
	    cout << ans/2 << endl;
	}
}
