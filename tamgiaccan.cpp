#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cout <<"NHAP CHIEU DAI CUA TAM GIAC:"<<endl;
	cin>>n;
	cout<<"TAM GIAC CAN DUOC IN RA LA:"<<endl;
	for (i=1;i<=n;i++){
		for (j=1;j<=n-i;j++) 
		cout<<"\t";
		for (j=1;j<=2*i-1;j++)
		cout <<"*\t";
		cout<<"\n";
	}
	return 0;
}
