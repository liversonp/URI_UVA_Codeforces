#include <bits/stdc++.h>

using namespace std;

int main(){
	int num,sum;
	do{
		sum = 0;
		cin>>num;
		if(num == 0){
			break;		}
		if(num % 2 != 0)
			num++;

		for(int i=0; i<5;i++){
			sum+=num;
			num+=2;
		}
		cout<<sum<<endl;

	} while(num != 0);
	return 0;
}