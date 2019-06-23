#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,numx=0,tprim=0,mud=0;
	string file;
	cin>>n>>file;

	for(int i=2;i<n;i++){
		if(file[i]== 'x' && file[i-1]== 'x' && file[i-2]== 'x'){
			numx++;
		}
	}

	if(numx >= 1){
		while(numx >= 1){
			numx--;
			mud++;
		}
		cout<<mud<<endl;
	}

	else{
		cout<<"0"<<endl;
	}

	return 0;
}	