#include<iostream>
using namespace std;
void NhapMang(int a[],int n){
	for (int i=0;i<n;i++){
		cout <<"NHAP MANG A["<<i<<"]:";
		cin>>a[i];
	}
}
void XuatMang(int a[],int n){
	cout <<"MANG DUOC NHAP LA:";
	for (int i=0;i<n;i++){
		cout <<a[i]<<"\t";
	}
}
/*void SapXep(int a[],int n){
	int t;
	for (int i=0;i<n-1;i++){
		if (a[i]>a[i+1]) {
			t=a[i];
			a[i]=a[i+1];
		    a[i+1]=t;
			
		}
	}
	XuatMang(a,n);
	
}*/
/*void SapXep(int a[],int n)
{
 for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
   {
    if(a[i]>a[j]) 
     {
       int t=a[i];
       a[i]=a[j];
       a[j]=t;
     }
   }
 XuatMang(a,n);   
}*/
void SapXepChanLe(int a[],int n){
	for(int i=0;i<n-1;i++)
	 for (int j=i+1;j<n;j++){
	 	if(a[i]%2!=0) {
	 		int t=a[i];
            a[i]=a[j];
            a[j]=t;
		 }
	 }
	 XuatMang(a,n);
}

int main(){
	int n;
	int a[100];
	cout <<"NHAP N:";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
   	
    SapXepChanLe(a,n);
	return 0;
	
}
