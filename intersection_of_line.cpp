#include <bits/stdc++.h>
using namespace std;
long double PI = acos(-1.0);

void solve()
{
	int a, b, c, d, results;
	cin >> a >> b >> c >> d;

	if (min(c, d) > max(a, b))
	{	cout << -1;
	}
	else
		cout << max(a, b) << " - " << min(c, d);


}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// int _t; cin >> _t; while (_t--)
	solve();

}
