#include <bits/stdc++.h>

using namespace std;

int main(){
	int num,sum=0,vezes;
	cin>>vezes;
	while(vezes--){
		sum=0;
		cin>>num;
		for(int i=0;i<num-1;i++){
			if(num % (i+1) == 0){
				sum+=(i+1);
			}
		}
		if(sum == num)
			cout<<num<<" eh perfeito"<<endl;
	
		else
			cout<<num<<" nao eh perfeito"<<endl;

	}
	return 0;
}