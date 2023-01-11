// Floor ceil and round of A/b
#include <bits/stdc++.h>
using namespace std;
long double PI = acos(-1.0);

void solve()
{
	int a, b;
	cin >> a >> b;
	cout << a / b << endl;
	cout << (2 * a + b) / (2 * b) << endl; // floor
	cout << (a + b - 1) / b << endl; // ceil 10/4 ; 10+4-1/4
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// int _t; cin >> _t; while (_t--)
	solve();

}
