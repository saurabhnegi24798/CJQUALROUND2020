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
		string s;
		cin >> s;
		int n = s.size();
		int open = s[0] - '0';
		string ans = "";
		for (int i = 0; i < open; i++)
		{
			ans += "(";
		}
		ans += string(1, s[0]);
		for (int i = 1; i < n; i++)
		{
			int cur = s[i] - '0';
			int prev = s[i - 1] - '0';
			if (cur > prev)
			{
				for (int j = 0; j < cur - prev; j++)
				{
					ans += "(";
					open++;
				}
				ans += string(1, s[i]);
			}
			else
			{
				for (int j = 0; j < prev - cur; j++)
				{
					ans += ")";
					open--;
				}
				ans += string(1, s[i]);
			}
		}
		for (int i = 0; i < open; i++)
		{
			ans += ")";
		}
		cout << "Case #" << tt << ": " << ans << "\n";
	}
}

