/*
	Name:Tejinder Singh
	Roll No:2010990732
	Set no:5
	Q2
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int>arr[n];
	for(auto &i:arr) cin>>i;
	
	int target;
	cin>>target;
	
	unordered_set<int> s;
	vector<vector<int,int>> s;
	for(auto &i:arr){
		if(s.find(target-i)!=s.end())
		ans.push_back((i,target-i));
	}	
	s.insert(i);
	if(ans.size()==0){
		cout<<"pair not found";
	}
	else{
		for(auto &v:arr){
			cout<<v[0]<<" "<<v[1]<<endl;
		}
	}
}


























































































































































