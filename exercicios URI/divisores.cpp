#include <bits/stdc++.h>

using namespace std;

int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		if(num % (i+1) == 0){
			cout<<i+1<<endl;
		}
	}
	return 0;
}