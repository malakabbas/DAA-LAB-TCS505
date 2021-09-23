#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	int n,t;
	long int k;
	int arr[100];
	int mid;
	in >> t;
	int count;
	while(t){
		in >> n;
		count=0;
		int index=0;
		for(int i=0;i<n;i++){
			in >> arr[i];
		}
		in >> k;
		int left = 0;
		int right = n-1;
		while(left<=right){
		mid = left + ((right-left)/2);
		if(arr[mid]==k){
			count=1;
		}
		if(arr[mid]>k){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
		index++;
	}
	if(count==1){
		out << "Present "<< index <<endl;
	}
	else{
		out << "Not Present " <<index <<endl;
	}
	t--;
	}
}
