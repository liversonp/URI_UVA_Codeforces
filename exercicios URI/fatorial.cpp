#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int fat=1,num,i;
	cin>>num;
	for(i=0;i<num;i++){
		fat *= i+1;
	}

	cout<<fat<<endl;

	return 0;
}