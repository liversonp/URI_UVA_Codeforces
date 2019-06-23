#include <bits/stdc++.h>

using namespace std;

int main(){
	int num,vezes,div;
	cin>>vezes;
	while(vezes--){
		div = 0;
		cin>>num;
			for(int i=0;i<num-1;i++){
				if(num % (i+1) == 0){
					div++;
				}
			}
			if(div>=2)
				cout<<num<<" nao eh primo"<<endl;
		
			else
				cout<<num<<" eh primo"<<endl;
	}
	return 0;
}