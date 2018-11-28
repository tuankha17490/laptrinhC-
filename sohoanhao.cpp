#include<iostream>
#include<math.h>
using namespace std;
void NhapMang(int a[],int n){
	for (int i=0;i<n;i++){
		cout<<"MANG A["<<i<<"]:";
		cin>>a[i];
	}
}
void XuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout <<a[i]<<"\t";
	}
}
bool KTraSoHoanHao(int j){
	int p=0;
	for (int i=1;i<j;i++){
		if (j%i==0) p+=i;
	}
	if (p==j) return true;
	 return false;
}
void XoaPhanTu(int a[], int &n,int vt){
	for (int i=vt;i<n;i++){// vt= vi tri can xoa 
	 a[i]=a[i+1];// bat dau xoa vi tri
		
	}
	n--;
	
}
void XoaMang(int a[],int &n){
	for (int i=0;i<n;i++){
		if (KTraSoHoanHao(a[i])==true) {XoaPhanTu(a,n,i);
		i--;}
	}	
}
int main(){
    int n;
    int a[50];
	cout <<"NHAP SO LUONG MANG:"<<endl;
	cin >>n;
	NhapMang(a,n);
	XuatMang(a,n);
	XoaMang(a,n);
	cout << "\nMang sau khi xoa: ";
	
	XuatMang(a,n);
	return 0;
	
}
