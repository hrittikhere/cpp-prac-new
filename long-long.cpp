#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long a, b, sub, add, multi;

	cin >> a >> b;
	add = a + b;
	sub = a - b;
	multi = a * b;
// multi = 1LL*a*b;


	cout << a << " + " << b << " = " << add << endl;
	cout << a << " * " << b << " = " << multi << endl;
	cout << a << " - " << b << " = " << sub << endl;


}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int _t; cin >> _t; while (_t--)
		solve();

}
