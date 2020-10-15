#include<bits/stdc++.h>
using namespace std; typedef long long int ll;
#define M 998244353
#define all(a) a.begin() , a.end()
#define print(x)   cout<<x<<"\n";
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{os << "["; for (int i = 0; i < v.size(); ++i) { os << v[i]; if (i != v.size() - 1) os << ", "; } os << "]\n"; return os;}
template <typename T>
ostream& operator<<(ostream& os, const set<T>& v)
{os << "["; for (auto it : v) {os << it; if (it != *v.rbegin())os << ", ";} os << "]\n"; return os;}
template <typename T, typename S>
ostream& operator<<(ostream& os, const map<T, S>& v)
{for (auto it : v)os << it.first << " : " << it.second << "\n"; return os;}
template <typename T, typename S>
ostream& operator<<(ostream& os, const pair<T, S>& v)
{os << "("; os << v.first << ", " << v.second << ")"; return os;}
//*******************************************************************//
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	for (int tt = 1; tt <= t; tt++)
	{
		int n, x, y;
		cin >> n;
		vector<pair<pair<int, int>, int>> a;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			a.push_back({ {x , y} , i + 1});
		}
		map<int, char> m;
		int ok = 1;
		int c = 0;
		int j = 0;
		int idx = 0;
		vector<pair<pair<int, int>, int>> inp = a;
		sort(all(a));
		for (int i = 0; i < n; i++)
		{
			x = a[i].first.first;
			y = a[i].first.second;
			idx = a[i].second;
			if (c <= x)
			{
				c = y;
				m[idx] = 'C';
			}
			else if (j <= x)
			{
				j = y;
				m[idx] = 'J';
			}
			else
			{
				ok = 0;
				break;
			}
		}
		if (ok == 0)
		{
			cout << "Case #" << tt << ": " << "IMPOSSIBLE\n";
		}
		else
		{
			cout << "Case #" << tt << ": ";
			for (int i = 0; i < n; i++)
			{
				idx = inp[i].second;
				cout << m[idx];
			}
			cout << '\n';
		}
	}
}

