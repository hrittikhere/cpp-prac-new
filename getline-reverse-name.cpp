#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int count;
	cin >> count;
	string name[count];
	string temp;
	getline(cin, temp);
	for (int i = 0; i < count; i++)
	{
		getline(cin, name[i]);
	}

	for (int i = count - 1; i >= 0; i--)
	{
		cout << "Hi " << name[i] << "!" << endl;
	}


}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// int _t;cin>>_t;while(_t--)
	solve();

}
