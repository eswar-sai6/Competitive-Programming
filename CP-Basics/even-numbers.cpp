#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
if(n%2==0){
for(long long i=2;i<=n;i=i+2){
cout<<i<<"\n";
}
}
else if (n%2==0 && n!=1){
for(long long i=2;i<n;i=i+2){
cout<<i<<"\n";
}
}
else if (n==1){
cout<<-1<<"\n";
}
}