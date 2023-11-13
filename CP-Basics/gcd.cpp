#include <bits/stdc++.h>
using namespace std;
long long  GCD(long long num1,long long num2){
	if(num1==0){
		return num2;
	}
	if(num2==0){
		return num1;
	}
	if(num1==num2){
		return num1;
	}
	if(num1>num2){
		return gcd(num1-num2,num2);
	}
	return gcd(num1,num2-num1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 
long long num1;
long long num2;
cin>>num1>>num2;
long long gcd=GCD(num1,num2);
cout<<gcd<<endl;

}