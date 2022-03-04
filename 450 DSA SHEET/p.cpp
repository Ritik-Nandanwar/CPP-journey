
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	// vector<vector<string>> outer;
	// int n;
	// cin>>n;
	// for(int i=0 ;i<n;i++){
	// 	vector<string> inner;
	// 	for(int j=0 ;j<3;j++){
	// 		int d;
	// 		d.to_string();
	// 		cin>>d;
	// 		inner.push_back(d);
	// 	}
	// 	outer.push_back(inner);
	// }
	// for(int i=0 ;i<n;i++){
	// 	for(int j=0 ;j<3;j++){
	// 		cout<<outer[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int n;
	cin>>n;
	stack<int> z;
	stack<int> o;
	stack<int> t;
	for(int i=0 ;i<n;i++){
		for(int j=0 ;j<5;i++){
			int d;
			cin>>d;
			if(d==0){
				z.push(d);
			}
			if(d==1){
				o.push(d);
			}
			if(d==2){
				t.push(d);
			}
		}
	}

	if(o.size()>t.size()){
		cout<<"INDIA";
        return 0;
	}
	if(o.size()<t.size()){
		cout<<"ENGLAND";
        return 0;            
	}
	if(o.size()==t.size()){
		cout<<"DRAW";
        return 0;
	}
	return 0;
}



