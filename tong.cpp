#include<iostream>
using namespace std;
int main(){
	int n;
	int S=0;
    int T=0;
	cout<<"nhap n:"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++){
	S+=i;
	T+=S;
}
cout<<"tong la:"<<T;
return 0;
}

