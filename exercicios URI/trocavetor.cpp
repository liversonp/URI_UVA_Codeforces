#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> v;
	int num;
	for(int i=0;i<20;i++){
		cin>>num;
		v.push_back(num);
	}

	for(int i=0;i<20;i++){
		printf("N[%d] = %d\n", i,v[19-i]);
	}
	return 0;
}