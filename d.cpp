#include<iostream>
using namespace std;
void NhapMaTran(int a[][20],int n){
	for (int i=1;i<=n;i++){
	  for(int j=1;j<n+1;j++){
	  	cout<<"NHAP MA TRAN["<<i<<"] ["<<j<<"]:";
	  	cin>>a[i][j];
	  }
	  }
}
void XuatMaTran(int a[][20],int n){
     for (int i=1;i<=n;i++){
	    for(int j=1;j<n+1;j++){
	    	cout.width(5);
			cout<<a[i][j];
		}
		cout<<endl;
		}
}

int main(){
	int n;
	int a[20][20];
	cout <<"NHAP BAC N CUA MA TRAN:";
	cin>>n;
	NhapMaTran(a,n);
	XuatMaTran(a,n);
	return 0;
}
