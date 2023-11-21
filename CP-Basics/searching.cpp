#include <bits/stdc++.h>
using namespace std;
void fast(){
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
	long long n,x;
	bool flag=false;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	for(long long i=0;i<n;i++){
		if(arr[i]==x){
			cout<<i<<endl;
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<-1;
	}

	

}