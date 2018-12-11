#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int n;
	int S=0;
	cout<<"nhap n:"<<endl;
	cin>>n;
	for (int i=0;i<n;i++){
		S+=pow(3,i);
	}
	cout<<"tong bac 3 N so nguyen dau la :"<<S;
	return 0;
}
