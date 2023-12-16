#include<iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long arr[n];
	long long m=INT_MAX;
	for(long long i=0;i<n;i++){
		cin>>arr[i];
		m= min(m,arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]==m){
		cout<<arr[i]<<" "<<i+1<<endl;
		break;
		}
	}

}
