#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
	if(n==0 || n==1){
	return false;
}
for(long long i=2;i<=n/2;i++){
	if(n%i==0){
		return false;
		break;
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
bool prime=is_prime(n);
if(prime){
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}



}