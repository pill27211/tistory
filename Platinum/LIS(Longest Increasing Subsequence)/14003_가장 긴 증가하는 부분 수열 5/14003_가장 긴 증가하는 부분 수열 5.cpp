#include<bits/stdc++.h>
using namespace std;

vector <int> V;
stack <int> S;
int n, i, j, p, q, a[1000001], dp[1000001];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (i = 1; i <= n; cin >> a[i++]);
	V.push_back(a[1]);
	for (i = 2; i <= n; i++)
	{
		if (V[p] < a[i])
			V.push_back(a[i]), dp[i] = ++p;
		else
			j = lower_bound(V.begin(), V.end(), a[i]) - V.begin(), V[j] = a[i], dp[i] = j;
	}
	cout << p + 1 << '\n';
	for (i = n; i; i--)
		if (dp[i] == p)
			S.push(a[i]), p--;
	while (S.size())
		cout << S.top() << ' ', S.pop();
}