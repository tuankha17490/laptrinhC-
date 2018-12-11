#include<iostream>

using namespace std;

void NhapMang(float a[][20],int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1;j++){
	
        cout<<"A["<<i<<"] ["<<j<<"]=\t";
        cin>> a[i][j];
    }
}
}
void XuatMang(float a[][20],int n)
{
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1;j++){
	
        cout.width(5);
		cout<<a[i][j];
	}
   cout<<"\n";
}
 
}
void SapXep(float a[][20],int n)
{
    float m,x[100];
 
  for(int i=1;i<=n-1;i++)
  {
      if(a[i][i]==0)
      {
          int j=i+1;
          while(j<=n)
          {
              if(a[j][i]!=0)
                break;
              j++;
 
          }
     for(int k=1;k<=n+1;k++)
     {
         a[i][k]=a[j][k];
 
     }
      }
  for(int j=i+1;j<=n;j++)
  {
    m=-a[j][i]/a[i][i];
    for(int k=i;k<=n+1;k++)
    {
        a[j][k]=a[j][k]+a[i][k]*m;
 
    }
 
  }
 
 
      }
      XuatMang(a,n);
for(int i=n;i>=1;i--)
{
    float S=0;
    for(int j=i+1;j<=n;j++)
    {
        S+=a[i][j]*x[j];
 
    }
    x[i]=(a[i][n+1]-S)/a[i][i];
 
 
}
cout<<"nghiem cua phuong trinh:\n";
for(int i=1;i<=n;i++)
{
    cout<<i<<x[i]<<"\n";
}
 
}
int main(){
int n;
float a[20][20];
cout<<"input n:";
cin>>n;
NhapMang(a,n);
XuatMang(a,n);
SapXep(a,n);
cout<<"\n";
return 0;
}
