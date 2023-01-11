#include <bits/stdc++.h>
using namespace std;
long double PI = acos(-1.0);

void solve()
{
	long double radius;
	cin >> radius;
	cout <<fixed<<setprecision(9)<< radius*radius*PI;
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// int _t; cin >> _t; while (_t--)
	solve();

}
