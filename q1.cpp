/*
	Name:Tejinder Singh
	Roll No:2010990732
	Set no:5
	Q1
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){                                               
	int n; cin>>n; 
	vector<int> arr[n];
	
	//sorting the array;
	sort(arr.begin(),arr.end());

	int i=0,j=n/2+n%2;
	//taking vector for storing the ans;
	vector<int> ans;
	
	while(i<n/2+n%2 || j<n){
		//taking half of the array and modulus the half of the array
		if(i<n/2+n%2) ans.push_back(arr[i++]);
		if(j<n) ans.push_back(arr[j++]);
	}

	//printing the array 
	for(auto &i:ans) cout<<i<<"";
	cout<<endl;
}
