#include <bits/stdc++.h>
using namespace std;
void fast()
{
	cin.tie(0);
	cout.tie(0);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif
	fast();
	long long n;
	cin>>n;
	long long arr[n];
	
	for(long long i=0;i<n;i++){
		cin>>arr[i];
	}
	for(long long i=0;i<n;i++){
		if(arr[i]<=10){
			cout<<"A"<<"["<<i<<"] "<<"= "<<arr[i]<<"\n";
		}
	}
}
