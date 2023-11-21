#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif

	long long n;
	cin>>n;
	long long abs_sum=0;
	long long a;
	for(long long i=1;i<=n;i++){
		cin>>a;
		abs_sum=abs_sum+a;
	}
	cout<<abs(abs_sum)<<"\n";
}
