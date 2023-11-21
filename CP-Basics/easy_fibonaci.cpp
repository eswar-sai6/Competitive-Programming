#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif

	long long n;
	cin >> n;
	long long fib[n + 5];
	fib[1] = 0;
	fib[2] = 1;
	for (long long i = 1; i <=n; i++)
	{
		if (i == 1 || i == 2)
		{
			cout << fib[i] << " ";
		}
		else
		{
			fib[i] = (fib[i - 1] + fib[i - 2]);
			cout << fib[i] << " ";
		}
	}
}

