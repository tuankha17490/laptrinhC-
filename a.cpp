#include<iostream>
#include<math.h>
using namespace std;

float TinhTong(float n,float k){
	float p=1;
	float T=1;
	if(k==0) return 1;
	else for (float i=1;i<=k;i++){
		T+=pow(n,i)/i;
	 }
	 return T;
}
int main(){
	float n,k;
	cout <<"NHAP SO CAN TINH:";
	cin>>n;
	cout<<"NHAP SO MU";
	cin>>k;
	cout<<"TONG LA:\t"<<TinhTong(n,k);
}
