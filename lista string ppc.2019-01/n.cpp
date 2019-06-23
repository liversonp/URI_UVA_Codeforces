#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, v[10010],sum,n=1,teste,contador=0;
	cin>>k;

	while(contador != k){
		
		teste = n;

		sum = 0;

		while(teste != 0){
			sum += teste%10;
			teste = teste/10;
		}

		if(sum == 10){
			contador++;

		}

		n++;

	}
	cout<<n-1<<endl;
	return 0;
}