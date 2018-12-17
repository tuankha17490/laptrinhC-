#include<iostream>
using namespace std; 

void NhapMang(int a[], int n){
	for (int i=1;i<=n;i++){
		cout <<"NHAP A["<<i<<"]: ";
		cin>>a[i];
	}
}

void XuatMang(int a[], int n){
	for (int i=1;i<=n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

void DaoNguoc(int a[],int n){
	for (int i=n;i>0;i--){
      cout<<a[i]<<"\t";
		
	}
	cout<<endl;
}
int TongMang(int a[],int n){
	int s=0;
	for (int i=1;i<=n;i++){
		s+=a[i];
	}
	return s;
}

void SoChan(int a[],int n){
	for (int i=1;i<=n;i++){
		if (a[i]%2==0) cout<<a[i]<<"\t";
	}
	cout<<endl;
}


void SoLe(int a[],int n){
	for(int i=1;i<=n;i++){
		if (a[i]%2!=0) cout<<a[i]<<"\t";
	}
	cout<<endl;
}
int TongSoChan(int a[],int n){
	int s=0;
	for (int i=1;i<=n;i++){
		if (a[i]%2==0) s+=a[i];
	}
	return s;
}
int TongSoLe(int a[], int n){
	int s=0;
	for (int i=1;i<=n;i++){
		if (a[i]%2!=0) s+=a[i];
	}
	return s;
}

int LonNhat(int a[],int n){
	int t=a[1];
	for (int i=2;i<=n;i++){
	if(a[i]>t) t=a[i];

	}
		return t;
}
int ViTriLonNhat(int a[],int n){
	int t=0;
	for (int i=2;i<=n;i++){
	if(a[i]>t) t=i;

	}
		return t;
}
int BeNhat(int a[],int n){
	int t=a[1];
	for (int i=1;i<=n;i++){
		if (a[i]<t) t=a[i];
	}
	return t;
}
int ViTriBeNhat(int a[],int n){
	int t=a[1];
	for (int i=1;i<=n;i++){
		if (a[i]<t) t=i	;
		
	}
	if(t==a[1]) t=1;
	return t;
}
int SoChanLonNhat(int a[],int n){
	int t=a[1];
	for (int i=2;i<=n;i++){
	if(a[i]%2==0) {
		if(a[i]>t) t=a[i];
	}

	}
		return t;
}
int ViTriSoChanLonNhat(int a[],int n){
	int t=0;
	for (int i=2;i<=n;i++){
	if(a[i]%2==0) {
		if(a[i]>t) t=i;
	}

	}
		return t;
}
int SoLeLonNhat(int a[],int n){
	int t=a[1];
	for (int i=2;i<=n;i++){
	if(a[i]%2!=0) {
		if(a[i]>t) t=a[i];
	}

	}
		return t;
}
int ViTriSoLeLonNhat(int a[],int n){
	int t=0;
	for (int i=2;i<=n;i++){
	if(a[i]%2!=0) {
		if(a[i]>t) t=i;
	}

	}
		return t;
}

int SoLeBeNhat(int a[],int n){

	int vt=1;
	for (int i=1;i<=n;i++){
		if (a[i]%2!=0) {vt=i;
		break;}
	}
	int t=a[vt];
	for (int i=vt+1;i<=n;i++){
	if(a[i]%2!=0){
		if (a[i]<t) t=a[i];
	}
	}
	return t;
}
int ViTriSoLeBeNhat(int a[],int n){
		int vt=1;
		int b=1;
	for (int i=1;i<=n;i++){
		if (a[i]%2!=0) {vt=i;
		break;}
	}
	int t=a[vt];
	for (int i=vt+1;i<=n;i++){
	if(a[i]%2!=0){
		if (a[i]<t) b=i;
	}
	}
	if(b==1) b=vt;
	return b;
}

int SoChanBeNhat(int a[],int n){
		int vt=1;
	for (int i=1;i<=n;i++){
		if (a[i]%2==0) {vt=i;
		break;}
	}
	int t=a[vt];
	for (int i=vt+1;i<=n;i++){
	if(a[i]%2==0){
		if (a[i]<t) t=a[i];
	}
	}
	return t;
}
int ViTriSoChanBeNhat(int a[],int n){
		int vt=1;
		int b=1;
	for (int i=1;i<=n;i++){
		if (a[i]%2==0) {vt=i;
		break;}
	}
	int t=a[vt];
	for (int i=vt+1;i<=n;i++){
	if(a[i]%2==0){
		if (a[i]<t) b=i;
	}
	}
	if(b==1) b=vt;
	return b;
}
void SapXepTangDan(int a[],int n){
	int t;
	for (int i=1;i<=n;i++){
	  for (int j=i+1;j<=n;j++){
	  	if (a[i]>a[j]){
	  		t=a[i];
	  		a[i]=a[j];
	  		a[j]=t;
		  }
	  }
	}
	XuatMang(a,n);
}
void SapXepGiamDan(int a[],int n){
	int t;
	for (int i=1;i<=n;i++){
	  for (int j=i+1;j<=n;j++){
	  	if (a[i]<a[j]){
	  		t=a[i];
	  		a[i]=a[j];
	  		a[j]=t;
		  }
	  }
	}
	XuatMang(a,n);
}

int main (){
	int n;
	int a[50];
	cout <<"nhap n: ";
	cin>>n;
	NhapMang(a,n);
	cout<<"mang duoc nhap la: "<<endl;
	XuatMang(a,n);
	cout<<"mang sau khi dao nguoc la: "<<endl;
	DaoNguoc(a,n);
	cout<<"tong cua mang la: "<<TongMang(a,n)<<endl;
	
	cout<<"cac so chan cua mang la: "<<endl;
	SoChan(a,n);
	cout<<"tong cua cac so chan la: "<<TongSoChan(a,n)<<endl;
	
	cout<<"cac so le cua mang la:  "<<endl;
	SoLe(a,n);
	cout<<"tong cua cac so le la: "<<TongSoLe(a,n)<<endl;
    cout<<"so be nhat la:\t"<<BeNhat(a,n)<<endl;
    cout<<"vi tri so be nhat la:\t"<<ViTriBeNhat(a,n)<<endl;
    cout<<"so lon nhat la:\t"<<LonNhat(a,n)<<endl;
    cout<<"vi tri so lon nhat la:\t"<<ViTriLonNhat(a,n)<<endl;
    cout<<"so chan lon nhat la:\t"<<SoChanLonNhat(a,n)<<endl;
    cout<<"vi tri so chan lon nhat la:\t"<<ViTriSoChanLonNhat(a,n)<<endl;
    cout<<"so le lon nhat la:\t"<<SoLeLonNhat(a,n)<<endl;
    cout<<"vi tri so le lon nhat la:\t"<<ViTriSoLeLonNhat(a,n)<<endl;
    cout<<"so chan be nhat la:\t"<<SoChanBeNhat(a,n)<<endl;
    cout<<"vi tri so chan be nhat la:\t"<<ViTriSoChanBeNhat(a,n)<<endl;
    cout<<"so le be nhat la:\t"<<SoLeBeNhat(a,n)<<endl;
    cout<<"vi tri so le be nhat la:\t"<<ViTriSoLeBeNhat(a,n)<<endl;
    cout<<"mang duoc sap xep tang dan la:"<<endl;
    SapXepTangDan(a,n);
    cout<<"mang duoc sap xep giam dan la:"<<endl;
    SapXepGiamDan(a,n);
	return 0;
}
