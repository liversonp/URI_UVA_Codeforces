#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,num;
	cin>>n;
	vector<vector<int>> triangle[n];
	for(int i=0;i<n;i++){
		cin>>num;
		triangle[i].push_back(num);
	}
	return 0;
}