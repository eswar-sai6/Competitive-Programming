#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
	if(n==0 || n==1){
		return false;
	}
	for(long long i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 
long long n;
cin>>n;
for(long long i=1;i<=n;i++){
	if(is_prime(i)){
		cout<<i<<" ";
	}
}
}