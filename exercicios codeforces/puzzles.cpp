#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> distance;
	vector <int> peaces;
	int m,n,puzzle,d=0;
	cin>>n>>m;

	while(m--){
		cin>>puzzle;
		peaces.push_back(puzzle);
	}

	sort(peaces.begin(),peaces.end());

	d = peaces[n-1] - peaces[0];

	cout<<d<<endl;
	return 0;
}