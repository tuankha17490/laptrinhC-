#include<iostream>
#include<math.h>
using namespace std;

void TongBinhPhuongSoLe(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		if (i%2!=0) S+=pow(i,2);
	}
	cout<<"Tong binh phuong cai so le la : "<<S<<endl;
}
void TinhGiaiThua(int n){
	int S=1;
	for (int i=1;i<=n;i++){
		S*=i;
	}
	cout <<"GIAI THUA CUA SO "<<n<<" LA:"<<S<<endl;
}

bool SoNguyenTo(int n){
	if (n==1) return false;
	else for (int i=2;i<n;i++){
		if (n%i==0) return false;
	}
	return true;
}
void SoSanh(int n){
	int S=0;
	for (int i=1;i<=n)
}
int main(){
	int n;
	cout <<"NHAP VAO N: ";
	cin>>n;
	TongBinhPhuongSoLe(n);
	TinhGiaiThua(n);
	if (SoNguyenTo(n)==true) cout <<n<<" LA SO NGUYEN TO";
	else cout <<n<<" KHONG PHAI LA SO NGUYEN TO";
	return 0;
}
