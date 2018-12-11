#include<iostream>
using namespace std;

int main(){
	int n;
	cout <<"nhap chieu dai cua tam giac:"<<endl;
	cin>>n;
	cout<<"tam giac la:"<<endl;
	for (int i=n;i>0;i--){
		
		for (int j=n;j>0;j--){
			cout<<"*\t";
			
		}
		cout<<"\n";
		n--;
		
	}
	system("pause");
	return 0;
}
