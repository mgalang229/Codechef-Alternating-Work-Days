#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		// p and q must be multiples of a and b respectively
		// the difference of the days wherein they will reach the specific skill levels must be <= 1
		cout << ((p % a == 0 && q % b == 0) && abs(p / a - q /b) <= 1 ? "YES" : "NO") << '\n';
	}
	return 0;
}
