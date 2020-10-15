#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
		int n;
		cin >> n;
		int a[n][n];
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if (i == j)
					k += a[i][j];
			}
		}
		int r = 0, c = 0;
		for (int i = 0; i < n; i++)
		{
			set<int> s, p;
			for (int j = 0; j < n; j++)
			{
				s.insert(a[i][j]);
				p.insert(a[j][i]);
			}
			if (s.size() < n)
				r++;
			if (p.size() < n)
				c++;
		}
		cout << "Case #" << tt << ": " << k << " " << r << " " << c << "\n";
	}
}

