#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	sort(a,a+n);
	if(a[0]==1)printf("%d\n",-1);
	else printf("%d\n",1);
}