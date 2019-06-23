#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,max=240,sum,tempo,i;
	cin>>n>>k;

	sum = k;

	for(i=1;i<=n;i++){
		sum += i*5;

		if(sum > max){
			tempo = i;
			break;
		}

	}

	if(sum <= max){
		tempo = i;
	}

	cout<<tempo<<endl;
	return 0;
}