#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,z,sum=0,i=0;
	cin>>x;
	do{
		cin>>z;
	} while(z <= x);

	while(sum < z){
		sum +=x+i;
		i++;
	}
	cout<<i<<endl;

	return 0;
}