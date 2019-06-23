#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int,int>> drags;
	bool verif = false;
	int s,n,x,y;
	cin>>s>>n;

	for(int i=0;i<n;i++){
		cin>>x>>y;
		drags.push_back(make_pair(x,y));
	}
	sort(drags.begin(),drags.end());

	for(int i=0;i<n;i++){
		if(s > drags[i].first){
			s+= drags[i].second;
		}
		else{
			cout<<"NO"<<endl;
			verif = true;
			break;
		}
	}

	if(verif == false){
		cout<<"YES"<<endl;
	}
	return 0;
}